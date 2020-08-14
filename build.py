#!python
# SCons build manager
import os,sys

# Commands
cleanCmd = "scons -c"
prjCmd="scons"
testsCmd="scons TEST_ONLY=yes"
appCmd='scons APP_ONLY=yes'
logCmd = " > build/log.txt 2>&1"

def clean():
    os.system(cleanCmd)

def buildPrj():
    os.system(prjCmd)

def buildApp():
    os.system(appCmd)

def buildTests():
    os.system(testsCmd)

def dockerCmd(command):
    cwd = os.path.abspath(os.getcwd())
    cmd = command.join(['"','"'])
    os.system("docker run --rm -v "+cwd+":/ws -w /ws scons:1.0 bash -c "+cmd)

def buildPrjDocker():
    dockerCmd(prjCmd)

def cleanDocker():
    dockerCmd(cleanCmd)

def buildAppDocker():
    dockerCmd(appCmd)

def buildTests():
    dockerCmd(testsCmd)

cmd_list = [
    "clean",
    "buildPrj",
    "buildApp",
    "buildTests",
    "dockerCmd",
    "buildPrjDocker",
    "cleanDocker",
    "buildAppDocker",
    "buildTests",
]

help = '''Available commands are the following:
* clean
* buildPrj
* buildApp
* buildTests
* buildPrjDocker
* cleanDocker
* buildAppDocker
* buildTests'''

if __name__ == '__main__':
    if (len(sys.argv)==2) and (sys.argv[1] in cmd_list):
        globals()[sys.argv[1]]()
    else:
        print(help)
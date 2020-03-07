#!python
# Crossplatform scons build manager
import os,sys

# Commands
cleanCmd = "scons -c"
prjCmd="scons"
testsCmd="scons TEST_ONLY=yes"
appCmd='scons APP_ONLY=yes'
logCmd = " > build/log.txt 2>&1"

def clean():
    os.system(cleanCmd)

def buildProject():
    os.system(prjCmd)

def buildApp():
    os.system(appCmd)

def buildTests():
    os.system(testsCmd)

if __name__ == '__main__':
    globals()[sys.argv[1]]()

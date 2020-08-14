# You can find this image at https://hub.docker.com/repository/docker/cortesja/scons
FROM python:buster

MAINTAINER Jorge A. Cortés <contact@jorgeacortes.com>

LABEL description="Image for compiling C/C++ projects with SCons"

RUN pip install scons

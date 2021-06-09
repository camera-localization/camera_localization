FROM opencvcourses/opencv-docker

# bashrc extension
COPY .bash_custom /root/
RUN echo "source ~/.bash_custom" >> ~/.bashrc

# create dir structure
RUN mkdir -p /opencv-install-dir
RUN mkdir -p /home/project

# set entry dir (here project source files are mounted)
WORKDIR /home/project

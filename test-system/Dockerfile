FROM opencvcourses/opencv-docker4.5.1

# bashrc extension
COPY .bash_custom /root/
RUN echo "source ~/.bash_custom" >> ~/.bashrc

# create dir structure
RUN mkdir -p /opencv-install-dir && \
	mkdir -p /home/project

# set entry dir (here project source files are mounted)
WORKDIR /home/project

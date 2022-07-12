FROM alpine:latest

RUN echo "  ---> Install packages" \
    && apk update \
    && apk upgrade \
    && apk --update add \
        bash \
        gdb \
        build-base \
        cmake \
        git \
        gtest-dev


# for JAN LINXWEILER; BECAUSE HE NEEDS ll AND la DESPERATLY!!!!!111!!!!
RUN touch /root/.bashrc \
&& echo "alias ll=\"ls -l\"" >> /root/.bashrc \
&& echo "alias la=\"ls -la\"" >> /root/.bashrc

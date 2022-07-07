FROM fedora:36

WORKDIR /home/


RUN dnf -y update && \
dnf -y install gcc gcc-g++ python3 git curl wget unzip

RUN dnf -y install dnf-plugins-core && \
dnf copr enable -y felix/fedora-copr && \
dnf -y install bazel

# RUN cd /workspaces/cpp-test && \
# bazel test --test_tag_filters=-benchmark @com_google_absl//...

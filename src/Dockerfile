# Stage 1: Build stage
FROM ubuntu:latest AS build

# Install build-essential for compiling C++ code
RUN apt-get update && \
	apt-get install -y build-essential git cmake autoconf libtool pkg-config

# Set the working directory
WORKDIR /src

# Copy the source code into the container
COPY CMakeLists.txt ./
COPY main.cpp ./

## Compile the C++ code statically to ensure it doesn't depend on runtime libraries
RUN mkdir -p build/cmake
RUN cd build/cmake && cmake ../.. && make && cd ../..
#RUN cmake . && make

# Stage 2: Runtime stage
FROM scratch
#FROM ubuntu:bionic

WORKDIR /opt/hello-world

# Copy the binary from the build stage
COPY --from=build /src/build/cmake/helloworld ./

# Command to run the binary
ENTRYPOINT ["./helloworld"]
#CMD ["./helloworld"]

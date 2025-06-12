#include <iostream>

/*
docker
https://medium.com/codex/a-practical-guide-to-containerize-your-c-application-with-docker-50abb197f6d4
https://docs.docker.com/guides/cpp/containerize/
https://medium.com/@mfcollins3/shipping-c-programs-in-docker-1d79568f6f52
https://developer.cisco.com/docs/iox/tutorialbuild-sample-docker-type-c-based-simple-app/
https://amytabb.com/tips/tutorials/2018/07/28/docker-tutorial-c-plus-plus/
https://www.geeksforgeeks.org/execution-of-c-program-using-docker-environment/
https://ddanilov.me/dockerized-cpp-build
https://github.com/dockersamples/c-plus-plus-docker
https://github.com/mostsignificant/simplehttpserver/blob/main/Dockerfile

https://markus-x-buchholz.medium.com/docker-container-networking-c-client-server-app-e9750f003f8
https://www.freecodecamp.org/news/a-beginners-guide-to-docker-how-to-create-a-client-server-side-with-docker-compose-12c8cf0ae0aa/
https://forums.docker.com/t/how-can-i-make-my-local-client-server-application-communicate-on-a-local-socket-using-docker-compose/147229
https://github.com/dfollereau/clntserver
https://medium.com/better-programming/dockerizing-multiple-services-inside-a-single-container-96cdff286cef
https://iceoryx.io/v2.0.5/examples/icedocker/


sudo apt update && sudo apt upgrade -y
sudo apt install -y ca-certificates curl gnupg
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
sudo apt update
sudo apt install -y docker-ce docker-ce-cli containerd.io
sudo usermod -aG docker $USER
sudo curl -L "https://github.com/docker/compose/releases/download/$(curl -s https://api.github.com/repos/docker/compose/releases/latest | grep 'tag_name' | cut -d'"' -f4)/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose
sudo chmod +x /usr/local/bin/docker-compose
docker-compose --version
sudo systemctl enable docker

sudo docker build . -t hello-world:1.0.0
sudo docker image ls
sudo docker run --rm -it hello-world:1.0.0
sudo docker ps
*/

int main() {
    std::cout << "C++ Example: Hello, World!" << std::endl;
    return 0;
}

#include <drogon/drogon.h>

int main() {

    //Load config file
    drogon::app().loadConfigFile("ServerConfig.json");

    //Run HTTP framework,the method will block in the internal event loop
    drogon::app().run();


    return 0;
}

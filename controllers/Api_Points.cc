#include "Api_Points.h"

using namespace Api;

// Add definition of your processing function here

void Points::GetPoints(const HttpRequestPtr &req,
                 std::function<void (const HttpResponsePtr &)> &&callback) {
    Json::Value ret;
    ret["result"]="ok";
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Points::GetTeams(const HttpRequestPtr &req,
                 std::function<void (const HttpResponsePtr &)> &&callback) {
    Json::Value ret;

    ret["Result"]="ok";

    // To be fixed
    ret["Teams"] = "Red, Green, Blue, Yellow";

    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

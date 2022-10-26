#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class PointsDisplay : public drogon::HttpSimpleController<PointsDisplay>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN

    // Deliver points to the users going to the root of the website
    PATH_ADD("/", Get);

    PATH_LIST_END

    std::string Code {
    R"VELONG(

<!DOCTYPE html>
<html lang="">
  <head>
    <meta charset="utf-8">
    <title>HouseStat</title>
<style>
body {
  background-color: black;
}

* {
  text-shadow:
    -2px -2px 0 #000,
    2px -2px 0 #000,
    -2px 2px 0 #000,
    2px 2px 0 #000;
  font-family: arial;
}

.flex-container {
  display:flex;
  flex-wrap: wrap;
  font-size:48px;
  text-align:center;
  color: white;
}
.flex-points {
  padding: clamp(15px, 5%, 100%);
  flex: 50%;
}

@media (max-width: 800px) {
  .flex-points {
    flex: 100%;
  }
}
</style>
  </head>
  <body>
    <div class="flex-container" style="background-color:yellow;">
      <div style="background-color: red;" class="flex-points">542</div>
      <div style="background-color: blue;" class="flex-points">712</div>
      <div style="background-color: green;" class="flex-points">124</div>
      <div style="background-color: yellow;" class="flex-points">76</div>
    </div>
  </body>
</html>


    )VELONG"};
};

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

      <html>
        <body>
          <h1>Hello World!</h1>
        </body>
      </html>

    )VELONG"};
};

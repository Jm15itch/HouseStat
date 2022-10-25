#include "PointsDisplay.h"

void PointsDisplay::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // Simply output the internal tally display code to the user
    auto resp=HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(CT_TEXT_HTML);
    resp->setBody(PointsDisplay::Code);
    callback(resp);
}

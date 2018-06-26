/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.0.3-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ApiResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ApiResponse::ApiResponse()
{
    m_Code = 0;
    m_CodeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

ApiResponse::~ApiResponse()
{
}

void ApiResponse::validate()
{
    // TODO: implement validation
}

web::json::value ApiResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(m_Code);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

void ApiResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("code")))
    {
        setCode(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("code")]));
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("type")]));
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        setMessage(ModelBase::stringFromJson(val[utility::conversions::to_string_t("message")]));
    }
}

void ApiResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("code"), m_Code));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
        
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
        
    }
}

void ApiResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("code")))
    {
        setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("code"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
    }
}

int32_t ApiResponse::getCode() const
{
    return m_Code;
}


void ApiResponse::setCode(int32_t value)
{
    m_Code = value;
    m_CodeIsSet = true;
}
bool ApiResponse::codeIsSet() const
{
    return m_CodeIsSet;
}

void ApiResponse::unsetCode()
{
    m_CodeIsSet = false;
}

utility::string_t ApiResponse::getType() const
{
    return m_Type;
}


void ApiResponse::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ApiResponse::typeIsSet() const
{
    return m_TypeIsSet;
}

void ApiResponse::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t ApiResponse::getMessage() const
{
    return m_Message;
}


void ApiResponse::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool ApiResponse::messageIsSet() const
{
    return m_MessageIsSet;
}

void ApiResponse::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}


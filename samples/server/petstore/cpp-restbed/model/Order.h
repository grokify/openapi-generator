/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Order.h
 *
 * An order for a pets from the pet store
 */

#ifndef Order_H_
#define Order_H_



#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// An order for a pets from the pet store
/// </summary>
class  Order
{
public:
    Order();
    virtual ~Order();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// Order members
    
    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getPetId() const;
    void setPetId(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    void setQuantity(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getShipDate() const;
    void setShipDate(std::string value);
    /// <summary>
    /// Order Status
    /// </summary>
    std::string getStatus() const;
    void setStatus(std::string value);
    /// <summary>
    /// 
    /// </summary>
    bool isComplete() const;
    void setComplete(bool value);

protected:
    int64_t m_Id;
    int64_t m_PetId;
    int32_t m_Quantity;
    std::string m_ShipDate;
    std::string m_Status;
    bool m_Complete;
};

}
}
}
}

#endif /* Order_H_ */

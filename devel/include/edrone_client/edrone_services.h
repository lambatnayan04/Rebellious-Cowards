// Generated by gencpp from file edrone_client/edrone_services.msg
// DO NOT EDIT!


#ifndef EDRONE_CLIENT_MESSAGE_EDRONE_SERVICES_H
#define EDRONE_CLIENT_MESSAGE_EDRONE_SERVICES_H

#include <ros/service_traits.h>


#include <edrone_client/edrone_servicesRequest.h>
#include <edrone_client/edrone_servicesResponse.h>


namespace edrone_client
{

struct edrone_services
{

typedef edrone_servicesRequest Request;
typedef edrone_servicesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct edrone_services
} // namespace edrone_client


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::edrone_client::edrone_services > {
  static const char* value()
  {
    return "4694157b8edbc1fcf473057bcd528de1";
  }

  static const char* value(const ::edrone_client::edrone_services&) { return value(); }
};

template<>
struct DataType< ::edrone_client::edrone_services > {
  static const char* value()
  {
    return "edrone_client/edrone_services";
  }

  static const char* value(const ::edrone_client::edrone_services&) { return value(); }
};


// service_traits::MD5Sum< ::edrone_client::edrone_servicesRequest> should match 
// service_traits::MD5Sum< ::edrone_client::edrone_services > 
template<>
struct MD5Sum< ::edrone_client::edrone_servicesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::edrone_client::edrone_services >::value();
  }
  static const char* value(const ::edrone_client::edrone_servicesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::edrone_client::edrone_servicesRequest> should match 
// service_traits::DataType< ::edrone_client::edrone_services > 
template<>
struct DataType< ::edrone_client::edrone_servicesRequest>
{
  static const char* value()
  {
    return DataType< ::edrone_client::edrone_services >::value();
  }
  static const char* value(const ::edrone_client::edrone_servicesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::edrone_client::edrone_servicesResponse> should match 
// service_traits::MD5Sum< ::edrone_client::edrone_services > 
template<>
struct MD5Sum< ::edrone_client::edrone_servicesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::edrone_client::edrone_services >::value();
  }
  static const char* value(const ::edrone_client::edrone_servicesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::edrone_client::edrone_servicesResponse> should match 
// service_traits::DataType< ::edrone_client::edrone_services > 
template<>
struct DataType< ::edrone_client::edrone_servicesResponse>
{
  static const char* value()
  {
    return DataType< ::edrone_client::edrone_services >::value();
  }
  static const char* value(const ::edrone_client::edrone_servicesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EDRONE_CLIENT_MESSAGE_EDRONE_SERVICES_H

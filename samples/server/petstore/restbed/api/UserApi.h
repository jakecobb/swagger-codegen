/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UserApi.h
 *
 * 
 */

#ifndef UserApi_H_
#define UserApi_H_


#include <memory>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>

#include "User.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  UserApi: public restbed::Service
{
public:
	UserApi();
	~UserApi();
	void startService(int const& port);
	void stopService();
};


/// <summary>
/// Create user
/// </summary>
/// <remarks>
/// This can only be done by the logged in user.
/// </remarks>
class  UserApiUserResource: public restbed::Resource
{
public:
	UserApiUserResource();
    virtual ~UserApiUserResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates list of users with given input array
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  UserApiUserCreateWithArrayResource: public restbed::Resource
{
public:
	UserApiUserCreateWithArrayResource();
    virtual ~UserApiUserCreateWithArrayResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates list of users with given input array
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  UserApiUserCreateWithListResource: public restbed::Resource
{
public:
	UserApiUserCreateWithListResource();
    virtual ~UserApiUserCreateWithListResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Delete user
/// </summary>
/// <remarks>
/// This can only be done by the logged in user.
/// </remarks>
class  UserApiUserUsernameResource: public restbed::Resource
{
public:
	UserApiUserUsernameResource();
    virtual ~UserApiUserUsernameResource();
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Logs user into the system
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  UserApiUserLoginResource: public restbed::Resource
{
public:
	UserApiUserLoginResource();
    virtual ~UserApiUserLoginResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Logs out current logged in user session
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  UserApiUserLogoutResource: public restbed::Resource
{
public:
	UserApiUserLogoutResource();
    virtual ~UserApiUserLogoutResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}

#endif /* UserApi_H_ */

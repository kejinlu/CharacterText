//
//  FKFlickrPhotosGeoGetPerms.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosGeoGetPermsError_PhotoNotFound = 1,		 /* The photo id was either invalid or was for a photo not viewable by the calling user. */
	FKFlickrPhotosGeoGetPermsError_PhotoHasNoLocationInformation = 2,		 /* The photo requested has no location data or is not viewable by the calling user. */
	FKFlickrPhotosGeoGetPermsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosGeoGetPermsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosGeoGetPermsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosGeoGetPermsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosGeoGetPermsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosGeoGetPermsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosGeoGetPermsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosGeoGetPermsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosGeoGetPermsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosGeoGetPermsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosGeoGetPermsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosGeoGetPermsError;

/*

Get permissions for who may view geo data for a photo.


Response:

<perms id="10592" ispublic="0" iscontact="0" isfriend="0" isfamily="1" />

*/
@interface FKFlickrPhotosGeoGetPerms : NSObject <FKFlickrAPIMethod>

/* The id of the photo to get permissions for. */
@property (nonatomic, strong) NSString *photo_id; /* (Required) */


@end

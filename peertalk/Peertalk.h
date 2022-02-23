#import <Foundation/Foundation.h>

//! Project version number for Peertalk.
FOUNDATION_EXPORT double PeertalkVersionNumber;

//! Project version string for Peertalk.
FOUNDATION_EXPORT const unsigned char PeertalkVersionString[];

#if __has_include(<peertalk/PTUSBHub.h>)
#import <peertalk/PTChannel.h>
#else
#import "PTChannel.h"
#endif

#if __has_include(<peertalk/PTUSBHub.h>)
#import <peertalk/PTDefines.h>
#else
#import "PTDefines.h"
#endif

#if __has_include(<peertalk/PTUSBHub.h>)
#import <peertalk/PTProtocol.h>
#else
#import "PTProtocol.h"
#endif

#if __has_include(<peertalk/PTUSBHub.h>)
#import <peertalk/PTUSBHub.h>
#else
#import "PTUSBHub.h"
#endif

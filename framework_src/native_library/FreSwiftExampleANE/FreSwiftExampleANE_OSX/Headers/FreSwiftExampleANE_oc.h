/* Copyright 2018 Tua Rua Ltd.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.*/

#if __APPLE__
#include "TargetConditionals.h"
#import <Foundation/Foundation.h>
#if TARGET_OS_OSX

#import <Cocoa/Cocoa.h>
#include <Adobe AIR/Adobe AIR.h>

#define EXPORT __attribute__((visibility("default")))

EXPORT
EXTENSION_FIN_DECL(TRFSA);

EXPORT
EXTENSION_INIT_DECL(TRFSA);

#endif
@interface FreSwiftExampleANE_LIB : NSObject
@end
#endif


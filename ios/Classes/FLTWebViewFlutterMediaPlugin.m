// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import "FLTWebViewFlutterMediaPlugin.h"
#import "FLTCookieManagerWMedia.h"
#import "FlutterWebViewWMedia.h"

@implementation FLTWebViewFlutterMediaPlugin

+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  FLTWebViewFactoryWMedia* webviewFactory =
      [[FLTWebViewFactoryWMedia alloc] initWithMessenger:registrar.messenger];
  [registrar registerViewFactory:webviewFactory withId:@"plugins.flutter.io/webview_media"];
  [FLTCookieManagerWMedia registerWithRegistrar:registrar];
}

@end

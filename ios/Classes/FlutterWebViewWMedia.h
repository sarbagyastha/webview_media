// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Flutter/Flutter.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLTWebViewControllerWMedia : NSObject <FlutterPlatformView, WKUIDelegate>

- (instancetype)initWithFrame:(CGRect)frame
               viewIdentifier:(int64_t)viewId
                    arguments:(id _Nullable)args
              binaryMessenger:(NSObject<FlutterBinaryMessenger> *)messenger;

- (UIView *)view;
@end

@interface FLTWebViewFactoryWMedia : NSObject <FlutterPlatformViewFactory>
- (instancetype)initWithMessenger:(NSObject<FlutterBinaryMessenger> *)messenger;
@end

/**
 * The WkWebView used for the plugin.
 *
 * This class overrides some methods in `WKWebView` to serve the needs for the plugin.
 */
@interface FLTWKWebViewMedia : WKWebView
- (void)updateScrollPosition;
@end

NS_ASSUME_NONNULL_END

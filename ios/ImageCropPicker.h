//
//  ImageManager.h
//
//  Created by Ivan Pusic on 5/4/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef RN_IMAGE_CROP_PICKER_h
#define RN_IMAGE_CROP_PICKER_h

#import <Foundation/Foundation.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTImageLoader.h>
#else
#import "RCTBridgeModule.h"
#import "RCTImageLoader.h"
#endif

#import "QBImagePicker/QBImagePicker.h"
#import "RSKImageCropper/RSKImageCropper.h"
#import "UIImage-Resize/UIImage+Resize.h"
#import "Compression.h"
#import <math.h>

@interface ImageCropPicker : NSObject<
  RCTBridgeModule,
  QBImagePickerControllerDelegate,
  RSKImageCropViewControllerDelegate,
  RSKImageCropViewControllerDataSource>

@property (nonatomic, strong) NSDictionary *defaultOptions;
@property (nonatomic, strong) Compression *compression;
@property (nonatomic, retain) NSMutableDictionary *options;
@property (nonatomic, strong) RCTPromiseResolveBlock resolve;
@property (nonatomic, strong) RCTPromiseRejectBlock reject;
@property BOOL cropOnly;

@end

#endif

//
//  CAAnimation+RBLBlockAdditions.h
//  Rebel
//
//  Created by Danny Greg on 13/09/2012.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CAAnimation (RBLBlockAdditions)

// A block called on successful completion of the animation.
//
// This sets the delegate of the animation.
@property (nonatomic, copy) void (^rbl_completionBlock)(void);

@end

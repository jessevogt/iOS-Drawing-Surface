//
//  PaintView.h
//  DrawingSurface
//
//  Created by Jesse Vogt on 4/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaintView : UIView {
    void *cacheBitmap;
    CGContextRef cacheContext;
    float hue;

    CGPoint point0;
    CGPoint point1;
    CGPoint point2;
    CGPoint point3;
}

- (BOOL) initContext:(CGSize)size;
- (void) drawToCache;
@end

//
//  UIImageView+Extend.m
//  MBTest
//
//  Created by Maxb on 2020/10/23.
//

#import "UIImageView+Extend.h"

#import <SDWebImage/SDWebImage.h>

@implementation UIImageView (Extend)

- (void)mb_setImageUrl:(NSString *)imageUrl placeholderImage:(UIImage *)placeholderImage {
    [self sd_setImageWithURL:[NSURL URLWithString:imageUrl] placeholderImage:placeholderImage];
}

@end

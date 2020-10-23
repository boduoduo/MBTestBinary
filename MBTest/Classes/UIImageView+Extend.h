//
//  UIImageView+Extend.h
//  MBTest
//
//  Created by Maxb on 2020/10/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Extend)

- (void)mb_setImageUrl:(NSString *)imageUrl placeholderImage:(UIImage *)placeholderImage;

@end

NS_ASSUME_NONNULL_END

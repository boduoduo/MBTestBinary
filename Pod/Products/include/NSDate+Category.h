//
//  NSDate+Category.h
//  YunJi
//
//  Created by chenhc on 16/6/28.
//  Copyright © 2016年 浙江集商优选电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Category)

/** 将得到的时间(NSDate)根据类型格式转换为字符串*/
+ (NSString *)dateStringWithDate:(NSDate *)date dateFormatter:(NSString *)dateFormatter;

/** 将得到的时间字符串根据类型格式转换为时间格式(NSDate)*/
+ (NSDate *)dateWithDateString:(NSString *)dateString dateFormatter:(NSString *)dateFormatter;

/**
 将时间戳转为时间字符串

 @param timeStamp 时间戳
 @param dateFormatter 时间字符串格式
 @return 时间字符串
 */
+ (NSString *)dateStringWithTimeStamp:(NSString *)timeStamp dateFormatter:(NSString *)dateFormatter;

/** 将服务端给过来的时间戳（毫秒或者秒），转换成秒使用 */

+ (NSTimeInterval)dateStringCorrectTimeInterval:(NSString *)timeStamp;

- (BOOL) isToday;

-(BOOL)isSameDay:(NSDate *)date;
@end

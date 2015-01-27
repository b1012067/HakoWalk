//
//  CourseModel.h
//  tourism-app
//
//  Created by 河辺雅史 on 2014/10/30.
//  Copyright (c) 2014年 myname. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
#import "Course.h"
#import "AppDelegate.h"
#import "CustomAnnotation.h"

@interface CourseModel : NSObject {
    FMDatabase *database;
    @public
    NSMutableArray *course_table_data;
}

+ (CourseModel *)sharedManager;
- (id)init;
- (Course *) getDataWithName:(NSString *)name;
- (NSArray *)getSearchedByCategory:(BOOL)isSpringChecked isSummerChecked:(BOOL)isSummerChecked isAutumnChecked:(BOOL)isAutumnChecked isWinterChecked:(BOOL)isWinterChecked isParkChecked:(BOOL)isParkChecked isSeaChecked:(BOOL)isSeaChecked;
- (void) sortedbyDistanceMutableArray:(NSMutableArray *)course_table_datas;
- (void) sortedbyCaloryMutableArray:(NSMutableArray *)course_table_datas;
- (void) sortedbyTimeMutableArray:(NSMutableArray *)course_table_datas;
- (NSMutableArray *) getStartAnnotation;
- (NSMutableArray *) getAllCourseLine;
- (NSMutableArray *) getSpotWithName:(NSString *)name;
- (MKPolyline *) getCourseLineWithName:(NSString *)name;
- (NSMutableArray *) getStartAnnotationWithName:(NSString *)name;
- (NSString *) getSpotDetailTextWithName:(NSString *)course_name spot_name:(NSString *)spot_name;
- (NSString *) getSpotImageWithName:(NSString *)course_name spot_name:(NSString *)spot_name;

@end

//
//  FeedType.h
//  
//
//  Created by Marlon Harrison on 5/1/12.
//  Copyright (c) 2012 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photo;

@interface FeedType : NSManagedObject

@property (nonatomic, retain) NSNumber * enabled;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSNumber * selected;
@property (nonatomic, retain) NSSet *photos;
@end

@interface FeedType (CoreDataGeneratedAccessors)

- (void)addPhotosObject:(Photo *)value;
- (void)removePhotosObject:(Photo *)value;
- (void)addPhotos:(NSSet *)values;
- (void)removePhotos:(NSSet *)values;

@end

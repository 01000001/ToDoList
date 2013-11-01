//
//  ToDoItem.h
//  ToDoList
//
//  Created by Attila Csala on 11/1/13.
//  Copyright (c) 2013 Attila Csala. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

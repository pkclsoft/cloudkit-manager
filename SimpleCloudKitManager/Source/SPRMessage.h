//
//  SPRMessage.h
//  Simple CloudKit Messenger Sample
//
//  Created by Bob Spryn on 7/27/14.
//  Copyright (c) 2014 Sprynthesis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CloudKit/CloudKit.h>

@interface SPRMessage : NSObject <NSCoding>

@property (nonatomic, copy, readonly) NSString *senderFirstName;
@property (nonatomic, copy, readonly) NSString *senderLastName;
// arbitrary text data of the message
@property (nonatomic, copy, readonly) NSString *messageText;
// URL to local file of opaque binary blob data of the message
@property (nonatomic, strong, readonly) NSURL *messageData;
@property (nonatomic, strong, readonly) CKRecordID *senderRecordID;
@property (nonatomic, strong, readonly) CKRecordID *messageRecordID;

- (id) initWithNotification:(CKQueryNotification *) notification senderInfo:(CKDiscoveredUserInfo *)sender;
- (void) updateMessageWithMessageRecord:(CKRecord*) messageRecord;

@end

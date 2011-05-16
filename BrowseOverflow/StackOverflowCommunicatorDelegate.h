//
//  StackOverflowCommunicatorDelegate.h
//  BrowseOverflow
//
//  Created by Graham J Lee on 13/05/2011.
//  Copyright 2011 Fuzzy Aliens Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol StackOverflowCommunicatorDelegate <NSObject>

/**
 * Signal from the communicator that fetching questions has failed.
 * @param error The error received from the network or server.
 */
- (void)searchingForQuestionsFailedWithError: (NSError *)error;

/**
 * Signal from the communicator that it couldn't retrieve a question body.
 */
- (void)fetchingQuestionBodyFailedWithError: (NSError *)error;

/**
 * Trying to retrieve answers failed.
 * @param error The error that caused the failure.
 */
- (void)fetchingAnswersFailedWithError: (NSError *)error;

@end
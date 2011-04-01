//
//  StackOverflowManagerTests.h
//  BrowseOverflow
//
//  Created by Graham J Lee on 14/03/2011.
//  Copyright 2011 Fuzzy Aliens Ltd. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

@class StackOverflowManager;
@class MockStackOverflowManagerDelegate;
@class FakeQuestionBuilder;

@interface QuestionCreationWorkflowTests : SenTestCase {
@private
    StackOverflowManager *mgr;
    MockStackOverflowManagerDelegate *delegate;
    FakeQuestionBuilder *questionBuilder;
    NSError *underlyingError;
    NSArray *questionArray;
}

@end
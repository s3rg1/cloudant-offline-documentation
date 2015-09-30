//
//  CDTViewController.h
//  Project
//
//  Created by Michael Rhodes on 03/12/2013.
//  Copyright (c) 2013 Cloudant. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//  Unless required by applicable law or agreed to in writing, software distributed under the
//  License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
//  either express or implied. See the License for the specific language governing permissions
//  and limitations under the License.

#import <UIKit/UIKit.h>

@interface CDTViewController : UITableViewController <UIDocumentInteractionControllerDelegate>

@property (nonatomic, strong) IBOutlet UITextField *addTodoTextField;
-(IBAction)addTodoButtonTap:(id)sender;


-(IBAction)replicateTapped:(id)sender;

-(IBAction)reloadTapped:(id)sender;

@end

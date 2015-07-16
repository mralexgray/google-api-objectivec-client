/* Copyright (c) 2012 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

 The sample app controllers are built with ARC, though the sources of the GTL library 
 should be built without ARC using the compiler flag -fno-objc-arc in the 
 Compile Sources build phase of the application target.

 */

#if !defined(__has_feature) || !__has_feature(objc_arc)
#error "This file requires ARC support."
#endif

@import Cocoa; @import GDrive;

@interface DriveSampleWindowController : NSWindowController {
 @private
  IBOutlet NSTextField *_querySize, *_duration;

  IBOutlet NSTextField *_signedInField;
  IBOutlet NSButton *_signedInButton;

  IBOutlet NSTableView *_fileListTable;
  IBOutlet NSProgressIndicator *_fileListProgressIndicator;
  IBOutlet NSTextView *_fileListResultTextField;
  IBOutlet NSButton *_fileListCancelButton;
  IBOutlet NSImageView *_thumbnailView;

  IBOutlet NSPopUpButton *_downloadButton;
  IBOutlet NSButton *_viewButton, *_duplicateButton, *_trashButton, *_deleteButton;

  IBOutlet NSButton *_uploadButton;
  IBOutlet NSProgressIndicator *_uploadProgressIndicator;
  IBOutlet NSButton *_pauseUploadButton, *_stopUploadButton, *_newFolderButton;

  IBOutlet NSSegmentedControl *_segmentedControl;
  IBOutlet NSTableView *_detailTable;
  IBOutlet NSProgressIndicator *_detailProgressIndicator;
  IBOutlet NSTextView *_detailResultTextField;
  IBOutlet NSButton *_detailCancelButton;

  // Client ID Sheet (Not needed by real applications)
  IBOutlet NSButton *_clientIDButton;
  IBOutlet NSTextField *_clientIDRequiredTextField, *_clientIDField, *_clientSecretField;
  IBOutlet NSWindow *_clientIDSheet;
}

@property (nonatomic) NSNumber * qSize;

+ (DriveSampleWindowController *)sharedWindowController;

- (IBAction)      signInClicked : z;

- (IBAction)        getFileList : z;

- (IBAction)    cancelFileListFetch : z;

- (IBAction)            viewClicked : z;
- (IBAction)       duplicateClicked : z;
- (IBAction)           trashClicked : z;
- (IBAction)          deleteClicked : z;

- (IBAction)uploadFileClicked : z;
- (IBAction)pauseUploadClicked : z;
- (IBAction)stopUploadClicked : z;
- (IBAction)createFolderClicked : z;

- (IBAction)segmentedControlClicked : z;

- (IBAction)loggingCheckboxClicked : z;

// Client ID Sheet
- (IBAction)clientIDClicked : z;
- (IBAction)clientIDDoneClicked : z;
- (IBAction)APIConsoleClicked : z;

@end

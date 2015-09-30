# cloudant-offline-documentation
Digital vault sample App based on Cloudant for iOS library (CDTDatastore) and its sample App, providing automatic documentation download and offline viewer capabilities

## CDTDatastore sample App fork
This Digital vault sample App is a modification of the CDTDatastore Project App for iOS. The original project is found at [CDTDatastore](https://github.com/cloudant/CDTDatastore).

The To-Do list has been replaced by a PDF document list retrieved from a CouchDB/Cloudant server; and the item tap event displays the PDF document.

## CouchDB/Cloudant documents
The documents will appear on the App if the structure is:
```json
{
  "completed": false,
  "description": "PDF document name.pdf",
  "type": "com.cloudant.sync.example.task"
}
```
In addition, the on tap event will display the file content if the Document has a PDF attached with the same name as the description field (eg. "PDF document name.pdf").

## Using in your project
CDTDatastore is available through [CocoaPods](http://cocoapods.org), to install
it add the following line to your Podfile:

```ruby
pod "CDTDatastore"
```

Open XCode project:

```bash
$ cd Project
$ pod install
$ open Project.xcworkspace
```
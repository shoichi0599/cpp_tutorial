# cpp_tutorial
Upload C++ codes learned from "C++ Tutorial for Complete Beginners" at Udemy
https://www.udemy.com/free-learn-c-tutorial-beginners

## Directory structure
```
cpp_tutorial
 ├ {learning_content} 
 │ ├ {binary_file} // execute by './{binary_file}'
 │ └ {learning_content.cpp}
 └ README.md
```

# Visual Code Settings
## Code Runner
```
Preference -> Settings -> Extensions -> Run Code configuration -> Executor Map -> Edit in settings.json
```
Add below to "User Settings" to override the default settings
```
{
    "code-runner.executorMap": {
        "cpp": "cd $dir && runFiles=`ls *.cpp` && g++ `echo ${runFiles}` -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
    },
    "code-runner.runInTerminal": true
}
```
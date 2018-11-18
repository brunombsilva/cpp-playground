# Setup

## MacOS

```
brew tap bazelbuild/tap
brew tap-pin bazelbuild/tap
brew install bazel

sudo xcode-select -s /Applications/Xcode.app/Contents/Developer
sudo xcodebuild -license
bazel clean --expunge
```

## Windows

```
choco install bazel
choco install visualstudio2017buildtools
choco install visualstudio2017-workload-vctools
set BAZEL_VC=C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC
set BAZEL_SH=C:\tools\msys64\usr\bin\bash.exe
```

# Run

```
bazel run hello-world
```

# Test

```
bazel test ...:all
```
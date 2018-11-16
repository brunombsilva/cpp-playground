# Setup

## MacOS

```
brew tap bazelbuild/tap
brew tap-pin bazelbuild/tap
brew install bazel

bazel clean --expunge
sudo xcode-select -s /Applications/Xcode.app/Contents/Developer
sudo xcodebuild -license
bazel clean --expunge
```

# Run

```
bazel run hello-world
```
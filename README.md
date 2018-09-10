# style-dictionary-local-development
This is a simple repo that contains a setup of Style Dictionary that can be used when developing the library itself, in your local machine.

## setup
Install the required packages with:
```
yarn install
```
If you want to link your local version of the Style Dictionary, that you are using for development, you have to use the `yarn link` (https://yarnpkg.com/en/docs/cli/link) or `npm link` (https://docs.npmjs.com/cli/link) commands.

Once installed, you can build the token files with the command:
```
yarn build
```

## how to use it
The interesting part of this repo is the "config.js" file. This is where you are supposed to play with the properties and see the output generated in the `build` folder. There is no custom build script yet, there may be one in the future if needed.

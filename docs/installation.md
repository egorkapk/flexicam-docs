# Installation

This page will show how to add FlexiCam Plugin to your project

## Prepare your project

- Inside `/YorProject` directory create folder named `Plugins`

    !!! tip

         If directory `/YourProject/Plugins` exist skip this step

- Open `Plugins` folder and copy `FlexiCam` folder from Plugin files into it

## Build Plugin

- Run your UE5 project. You will see next message

    ![alt text](<resources/Build Plugin message.png>)

    Press "Yes" button

- If there are any errors, please build the project from source using your IDE

## Plugin Enable

Plugin enables by default, but if not

- Go to `Unreal Engine Plugin Browser`

- Search for `FlexiCam`

- Enable Plugin

    ![alt text](<resources/Enable Plugin.png>)

- Reload Engine

## C++ configuring

If you want to use Plugin in C++ Source Code you have to

- Inside YourProject.Build.cs file add

    "FlexiCam", "EnhancedInput", "GameplayTags" modules inside `PublicDependencyModuleNames`

    ```cs

    using UnrealBuildTool;

    public class Flex : ModuleRules
    {
        public Flex(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "UMG",
                "EnhancedInput",
                "FlexiCam",
                "GameplayTags"
            });
        
    ```

# source  
[1](https://superuser.com/a/618442/2140578)
[2](https://www.baeldung.com/linux/source-command)  
  
### ./script (Running the Script as an Executable)
- Behavior: When you run a script using ./script, you are executing the script as an executable in a new subshell.
- Subshell: A subshell is a child shell that is created to run the script. Any changes made to the environment within that script (e.g., modifying environment variables, creating aliases) will only apply within the subshell and will not affect the parent shell (your current terminal session).
- Effect: After the script finishes running, the subshell exits, and any changes to the environment inside the script (like exported variables or aliases) are lost.
### source script (Executing the Script in the Current Shell)
- Behavior: When you run a script using source script (or . script), the commands in the script are executed within the current shell environment, meaning they run as if you had typed them directly into the terminal.
- No Subshell: Unlike ./script, no new subshell is created. Therefore, any changes made by the script (e.g., setting environment variables, defining functions or aliases) will persist in the current shell after the script finishes.
- Effect: This is useful when the script modifies the environment in a way that you want to keep active in your current shell session.

### Key Takeaways:
- ./script: Runs the script in a new shell (subshell), and changes made in the script do not affect the current shell environment.  
- source script: Runs the script in the current shell, and any changes made in the script (e.g., variable exports, aliases) remain in the current shell session.

# minishell

🖥 🐚 The project about how to communicate with a computer using interactive lines of commands like a bash or zsh

### School command project

Realized functionality:
* Not interpret unclosed quotes or unspecified special characters like \ or ;.
* Not use more than one global variable, think about it and be ready to explain why you do it.
* Show a prompt when waiting for a new command.
* Have a working History.
* Search and launch the right executable (based on the PATH variable or by using relative or absolute path)
* Builtins:<br/>
◦ echo with option -n<br/>
◦ cd with only a relative or absolute path<br/>
◦ pwd with no options<br/>
◦ export with no options<br/>
◦ unset with no options<br/>
◦ env with no options or arguments<br/>
◦ exit with no options<br/>
* ’ inhibit all interpretation of a sequence of characters.
* " inhibit all interpretation of a sequence of characters except for $.
* Redirections:<br/>
◦ < redirect input. <br/>
◦ > redirect output. <br/>
◦ “<<” read input from the current source until a line containing only the de- limiter is seen. <br/>
◦ “>>” redirect output with append mode. <br/>
* Pipes | The output of each command in the pipeline is connected via a pipe to the
input of the next command.<br/>
* Environment variables ($ followed by characters) expand to their values.
* $? expand to the exit status of the most recently executed foreground pipeline.
* ctrl-C ctrl-D ctrl-\ work like in bash.
* When interactive:<br/>
◦ ctrl-C print a new prompt on a newline. <br/>
◦ ctrl-D exit the shell. <br/>
◦ ctrl-\ do nothing. <br/>

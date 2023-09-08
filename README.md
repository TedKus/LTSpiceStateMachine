# ltspice-state-machines README

This is the README for "ltspice-state-machines".
Highlights LTSpice State Machines
Suggests Snippets of State Machine elements

LTspice XVII includes an arbitrary state machine and introduces a new programming language called Contraption Programming Language. There are five new commands:

   .mach[ine] [<tripdt>] ; tripdt is an optional temporal tolerance
   .state <name> <value>
   .rule <old state> <new state> <condition>
   .output (node) <expression>
   .endmach[ine] ; end of block

For more details, visit: https://ltwiki.org/LTspiceHelpXVII/LTspiceHelp/html/DotMachine.htm

## Features

; type: .machine
.machine
    ; State Definitions:
    .state	state_a	state_a_value ; comment
    .state	state_b	state_b_value ; comment
    ; State Transition Rules:
    .rule	state_a	state_b	(condition1 operator condition2) ; comment
    .rule	state_b	state_a	(condition1 operator condition2) ; comment
    ; State Outputs:
    .output	(variable_name)	IF(state == state_a_value,	condition1,	condition2) ; comment
    .output	(variable_name)	IF(state == state_b_value,	condition1,	condition2) ; comment
.endmachine
; type: .state
.state	state_a	state_a_value ; comment
; type: .rule
.rule	start_state	finish_state 	(condition1 operator condition2)	; comment
; type: .output
.output	(variable_name)	IF(state == state_value, condition1, condition2) 	; comment
; type: .par
.param variable_name = value

## Requirements

None
## Extension Settings

None
## Known Issues

+ notation for continuation lines in .params are not recognized properly
## Release Notes

First time trying this!

### 0.0.1

Initial release of LTSpice State Machines

**Enjoy!**

.name "zork"
.comment "just a basic living prog"

	and	r1,%0,r1
#l2:	sti	r1,%:live,%0x1
#live:	live	%1
#	zjmp	%:live

export LAB_ROOT=/home/sl/sl-new/root
export PROG_ROOT=/home/sl/sl-new/user
 
export HOST=`hostname` 

# Remove everything following the "-" in the MACHTYPE 
export MACHTYPE=$(echo $MACHTYPE | sed 's/-.*//') 

# Append mac to the MACHTYPE if needed 
if uname -s | grep Darwin &>/dev/null && [ $MACHTYPE == 'i386' -o $MACHTYPE == 'x86_64' ] 
then 
    export MACHTYPE="$MACHTYPE"mac 
fi 

# Append xeno to the MACHTYPE if needed (and prevent duplicates) 
if uname -r | grep ipipe &>/dev/null && echo $MACHTYPE | grep -v xeno &>/dev/null 
then 
    export MACHTYPE="$MACHTYPE"xeno 
fi 

alias imake='imake -I$LAB_ROOT/config -TLAB_Imake.tmpl -D$MACHTYPE' 
alias sl_make='imake; cd src; imake; cd ..; make -s -j clean; make -s -j all; make -s -j install' 
export PATH=./$MACHTYPE:$PROG_ROOT/bin/$MACHTYPE:$LAB_ROOT/bin/$MACHTYPE:.:$PATH 


"=====MY VIM RC FILE=====
"
"	Author: Akash Kollipara
"	Date: 18-09-2018
"	Note: My Custom VIM RC file
"
"Setup UI properties
"
set term=xterm
colorscheme koehler
set number
set showcmd
set cursorline
set showmatch
set wildmenu
set autoindent
set copyindent
filetype indent on
filetype plugin on
syntax on
set lazyredraw
set mouse=n
"
"Setup Spaces & Tabs properties
"
set tabstop=8
set softtabstop=8
set noexpandtab
set smarttab
set listchars=tab:»-,eol:←,nbsp:?,
"
"Setup Searching properties
"
set incsearch
set hlsearch
"
"Setup Folding properties
"
set foldenable
set foldlevelstart=10
set foldnestmax=10
set foldmethod=indent

"
" Customer data types
"
"== c ==
syntax match ctype "\<[a-zA-Z_][a-zA-Z0-9_]*_[t]\>"

"
" File type to syntax map
"
au BufRead,BufNewFile *.ld.sx set filetype=ld
au BufRead,BufNewFile *.c.dev set filetype=c
au BufRead,BufNewFile *.c.tmp set filetype=c
au BufRead,BufNewFile *.S.dev set filetype=S
au BufRead,BufNewFile *.S.tmp set filetype=S

# About

A simple program that accepts values indefinetly from the user, and then automatically averages
them: best used in situations where you can't pull stats with an API or use raw text data.

# Installation

If you have not built C programs on linux, you may have to install the C build essentials
first:

<pre><code>
sudo apt-get install build-essential
</pre></code>

Clone and run the makefile (just copy and paste these commands):

<pre><code>
git clone https://github.com/LEDparty/get-average
cd get-average
make
sudo install average /urs/local/bin
</pre></code>

# Usage

Just run the program with no arguments, and it will keep asking you to enter values until you
enter "ok" or some other non-floating point or integer input:

<pre><code>
average
</pre></code>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta http-equiv="Content-Style-Type" content="text/css">
  <title></title>
  <meta name="Generator" content="Cocoa HTML Writer">
  <meta name="CocoaVersion" content="2566">
  <style type="text/css">
    p.p1 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Helvetica}
    p.p2 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Helvetica; min-height: 14.0px}
  </style>
</head>
<body>
<p class="p1">#include &lt;iostream&gt;</p>
<p class="p1">#include &lt;vector&gt;</p>
<p class="p1">using namespace std;</p>
<p class="p2"><br></p>
<p class="p1">void Linear_Search(const vector&lt;int&gt;&amp; arr, int n, int key) {</p>
<p class="p1"><span class="Apple-converted-space">    </span>int count = 0;</p>
<p class="p1"><span class="Apple-converted-space">    </span>for (int i = 0; i &lt; n; i++) {</p>
<p class="p1"><span class="Apple-converted-space">        </span>if (arr[i] == key) {</p>
<p class="p1"><span class="Apple-converted-space">            </span>cout &lt;&lt; "The key element is found at index " &lt;&lt; i &lt;&lt; endl;</p>
<p class="p1"><span class="Apple-converted-space">            </span>count++;</p>
<p class="p1"><span class="Apple-converted-space">        </span>}</p>
<p class="p1"><span class="Apple-converted-space">    </span>}</p>
<p class="p1"><span class="Apple-converted-space">    </span>if (count == 0) {</p>
<p class="p1"><span class="Apple-converted-space">        </span>cout &lt;&lt; "The element is not found in this array." &lt;&lt; endl;</p>
<p class="p1"><span class="Apple-converted-space">    </span>}</p>
<p class="p1">}</p>
<p class="p2"><br></p>
<p class="p1">int main() {</p>
<p class="p1"><span class="Apple-converted-space">    </span>int n, key;</p>
<p class="p1"><span class="Apple-converted-space">    </span>cout &lt;&lt; "Enter the size of the array: ";</p>
<p class="p1"><span class="Apple-converted-space">    </span>cin &gt;&gt; n;</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">    </span>if (n &lt;= 0) {</p>
<p class="p1"><span class="Apple-converted-space">        </span>cout &lt;&lt; "Array size must be greater than 0." &lt;&lt; endl;</p>
<p class="p1"><span class="Apple-converted-space">        </span>return 1;</p>
<p class="p1"><span class="Apple-converted-space">    </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">    </span>vector&lt;int&gt; arr(n);</p>
<p class="p1"><span class="Apple-converted-space">    </span>cout &lt;&lt; "Enter " &lt;&lt; n &lt;&lt; " elements of the array: ";</p>
<p class="p1"><span class="Apple-converted-space">    </span>for (int i = 0; i &lt; n; i++) {</p>
<p class="p1"><span class="Apple-converted-space">        </span>cin &gt;&gt; arr[i];</p>
<p class="p1"><span class="Apple-converted-space">    </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">    </span>cout &lt;&lt; "Enter the key to search: ";</p>
<p class="p1"><span class="Apple-converted-space">    </span>cin &gt;&gt; key;</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">    </span>Linear_Search(arr, n, key);</p>
<p class="p1"><span class="Apple-converted-space">    </span>return 0;</p>
<p class="p1">}</p>
</body>
</html>

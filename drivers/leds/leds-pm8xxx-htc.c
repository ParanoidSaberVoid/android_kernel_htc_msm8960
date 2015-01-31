
<<<<<<< HEAD



<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>android_kernel_htc_msm8960/leds-pm8xxx-htc.c at 1893d78d75fcb8ebba6b916e15088829107f66f3 · rmbq/android_kernel_htc_msm8960 · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="rmbq/android_kernel_htc_msm8960" name="twitter:title" /><meta content="Contribute to android_kernel_htc_msm8960 development by creating an account on GitHub." name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/2061140?v=3&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/2061140?v=3&amp;s=400" property="og:image" /><meta content="rmbq/android_kernel_htc_msm8960" property="og:title" /><meta content="https://github.com/rmbq/android_kernel_htc_msm8960" property="og:url" /><meta content="Contribute to android_kernel_htc_msm8960 development by creating an account on GitHub." property="og:description" />

      <meta name="browser-stats-url" content="/_stats">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="4BA88844:7FA0:3A7D154:54CCEF23" name="octolytics-dimension-request_id" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="inIz2j0ysI6kc+8HDWUpF40/+LAzshUdfm4LPicIv58RINVNJJATZzzVdUV1XQhjv9LE0SHSD2yPT/JRUmMFRA==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-e3321d79480f0738576ff81cb2f3f717fdbb0bf35ea5938c30005a3349371133.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-dde0fad02eec63beeeea358c4fcea2f224cb2d4fcf094f9cf9d9dd6bd5c5eece.css" media="all" rel="stylesheet" type="text/css" />
    
    


    <meta http-equiv="x-pjax-version" content="47acc7b6a71679710fe333073bd18058">

      
  <meta name="description" content="Contribute to android_kernel_htc_msm8960 development by creating an account on GitHub.">
  <meta name="go-import" content="github.com/rmbq/android_kernel_htc_msm8960 git https://github.com/rmbq/android_kernel_htc_msm8960.git">

  <meta content="2061140" name="octolytics-dimension-user_id" /><meta content="rmbq" name="octolytics-dimension-user_login" /><meta content="7973549" name="octolytics-dimension-repository_id" /><meta content="rmbq/android_kernel_htc_msm8960" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="5435052" name="octolytics-dimension-repository_parent_id" /><meta content="CyanogenMod/android_kernel_htc_msm8960" name="octolytics-dimension-repository_parent_nwo" /><meta content="5435052" name="octolytics-dimension-repository_network_root_id" /><meta content="CyanogenMod/android_kernel_htc_msm8960" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/rmbq/android_kernel_htc_msm8960/commits/1893d78d75fcb8ebba6b916e15088829107f66f3.atom" rel="alternate" title="Recent Commits to android_kernel_htc_msm8960:1893d78d75fcb8ebba6b916e15088829107f66f3" type="application/atom+xml">

  </head>


  <body class="logged_out  env-production  vis-public fork page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      
      <div class="header header-logged-out" role="banner">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/" ga-data-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions" role="navigation">
        <a class="button primary" href="/join" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
      <a class="button" href="/login?return_to=%2Frmbq%2Fandroid_kernel_htc_msm8960%2Fblob%2F1893d78d75fcb8ebba6b916e15088829107f66f3%2Fdrivers%2Fleds%2Fleds-pm8xxx-htc.c" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
    </div>

    <div class="site-search repo-scope js-site-search" role="search">
      <form accept-charset="UTF-8" action="/rmbq/android_kernel_htc_msm8960/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/rmbq/android_kernel_htc_msm8960/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
    </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item">
            <a class="header-nav-link" href="/explore" data-ga-click="(Logged out) Header, go to explore, text:explore">Explore</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/features" data-ga-click="(Logged out) Header, go to features, text:features">Features</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://enterprise.github.com/" data-ga-click="(Logged out) Header, go to enterprise, text:enterprise">Enterprise</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/blog" data-ga-click="(Logged out) Header, go to blog, text:blog">Blog</a>
          </li>
      </ul>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">


  <li>
      <a href="/login?return_to=%2Frmbq%2Fandroid_kernel_htc_msm8960"
    class="minibutton with-count star-button tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="/rmbq/android_kernel_htc_msm8960/stargazers">
      2
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2Frmbq%2Fandroid_kernel_htc_msm8960"
        class="minibutton with-count js-toggler-target fork-button tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>
        Fork
      </a>
      <a href="/rmbq/android_kernel_htc_msm8960/network" class="social-count">
        167
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author"><a href="/rmbq" class="url fn" itemprop="url" rel="author"><span itemprop="title">rmbq</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/rmbq/android_kernel_htc_msm8960" class="js-current-repository" data-pjax="#js-repo-pjax-container">android_kernel_htc_msm8960</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/CyanogenMod/android_kernel_htc_msm8960">CyanogenMod/android_kernel_htc_msm8960</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/rmbq/android_kernel_htc_msm8960/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/rmbq/android_kernel_htc_msm8960" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /rmbq/android_kernel_htc_msm8960">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>


    <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
      <a href="/rmbq/android_kernel_htc_msm8960/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /rmbq/android_kernel_htc_msm8960/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>


  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/rmbq/android_kernel_htc_msm8960/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /rmbq/android_kernel_htc_msm8960/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/rmbq/android_kernel_htc_msm8960/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /rmbq/android_kernel_htc_msm8960/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                
  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/rmbq/android_kernel_htc_msm8960.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/rmbq/android_kernel_htc_msm8960" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a> or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>



                <a href="/rmbq/android_kernel_htc_msm8960/archive/1893d78d75fcb8ebba6b916e15088829107f66f3.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download the contents of rmbq/android_kernel_htc_msm8960 as a zip file"
                   title="Download the contents of rmbq/android_kernel_htc_msm8960 as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/rmbq/android_kernel_htc_msm8960/blob/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:1e868d3917b097eb1befe19552924683 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="minibutton select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="kk-4.4.x"
    data-ref=""
    title=""
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>tree:</i>
    <span class="js-select-button css-truncate-target">1893d78d75</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/android-msm-evita-3.0/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="android-msm-evita-3.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="android-msm-evita-3.0">android-msm-evita-3.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/android-msm-jewel-3.0/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="android-msm-jewel-3.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="android-msm-jewel-3.0">android-msm-jewel-3.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/android-msm-ville-3.0/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="android-msm-ville-3.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="android-msm-ville-3.0">android-msm-ville-3.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/bubbaSense43/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="bubbaSense43"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="bubbaSense43">bubbaSense43</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/cm-10.1/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="cm-10.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cm-10.1">cm-10.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/cm-10.2/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="cm-10.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cm-10.2">cm-10.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/cm-11/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="cm-11"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cm-11">cm-11</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/jellybean/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="jellybean"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="jellybean">jellybean</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/jellybean-stable/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="jellybean-stable"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="jellybean-stable">jellybean-stable</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/kk-4.4.x/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="kk-4.4.x"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="kk-4.4.x">kk-4.4.x</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/l-5.0.x/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="l-5.0.x"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="l-5.0.x">l-5.0.x</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/master/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/mr1-staging/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="mr1-staging"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="mr1-staging">mr1-staging</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/rmbq/android_kernel_htc_msm8960/blob/test/drivers/leds/leds-pm8xxx-htc.c"
                 data-name="test"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="test">test</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="button-group right">
    <a href="/rmbq/android_kernel_htc_msm8960/find/1893d78d75fcb8ebba6b916e15088829107f66f3"
          class="js-show-file-finder minibutton empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/rmbq/android_kernel_htc_msm8960/tree/1893d78d75fcb8ebba6b916e15088829107f66f3" class="" data-branch="1893d78d75fcb8ebba6b916e15088829107f66f3" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">android_kernel_htc_msm8960</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/rmbq/android_kernel_htc_msm8960/tree/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers" class="" data-branch="1893d78d75fcb8ebba6b916e15088829107f66f3" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">drivers</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/rmbq/android_kernel_htc_msm8960/tree/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds" class="" data-branch="1893d78d75fcb8ebba6b916e15088829107f66f3" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">leds</span></a></span><span class="separator">/</span><strong class="final-path">leds-pm8xxx-htc.c</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="Davide Rombolà" class="avatar" data-user="2061140" height="24" src="https://avatars0.githubusercontent.com/u/2061140?v=3&amp;s=48" width="24" />
        <span class="author"><a href="/rmbq" rel="author">rmbq</a></span>
        <time datetime="2013-10-09T17:17:22Z" is="relative-time">Oct 9, 2013</time>
        <div class="commit-title">
            <a href="/rmbq/android_kernel_htc_msm8960/commit/1893d78d75fcb8ebba6b916e15088829107f66f3" class="message" data-pjax="true" title="BLN:add button light notification">BLN:add button light notification</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>3</strong>
           contributors
        </a>
      </p>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="intervigilium" href="/rmbq/android_kernel_htc_msm8960/commits/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c?author=intervigilium"><img alt="Ethan Chen" class="avatar" data-user="82248" height="20" src="https://avatars2.githubusercontent.com/u/82248?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="Flemmard" href="/rmbq/android_kernel_htc_msm8960/commits/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c?author=Flemmard"><img alt="Flemmard" class="avatar" data-user="1031254" height="20" src="https://avatars3.githubusercontent.com/u/1031254?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="rmbq" href="/rmbq/android_kernel_htc_msm8960/commits/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c?author=rmbq"><img alt="Davide Rombolà" class="avatar" data-user="2061140" height="20" src="https://avatars2.githubusercontent.com/u/2061140?v=3&amp;s=40" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Ethan Chen" data-user="82248" height="24" src="https://avatars0.githubusercontent.com/u/82248?v=3&amp;s=48" width="24" />
            <a href="/intervigilium">intervigilium</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Flemmard" data-user="1031254" height="24" src="https://avatars1.githubusercontent.com/u/1031254?v=3&amp;s=48" width="24" />
            <a href="/Flemmard">Flemmard</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Davide Rombolà" data-user="2061140" height="24" src="https://avatars0.githubusercontent.com/u/2061140?v=3&amp;s=48" width="24" />
            <a href="/rmbq">rmbq</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
          <span>1137 lines (1019 sloc)</span>
          <span class="meta-divider"></span>
        <span>36.347 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
          <a href="/rmbq/android_kernel_htc_msm8960/raw/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c" class="minibutton " id="raw-url">Raw</a>
            <a href="/rmbq/android_kernel_htc_msm8960/blame/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c" class="minibutton js-update-url-with-hash">Blame</a>
          <a href="/rmbq/android_kernel_htc_msm8960/commits/1893d78d75fcb8ebba6b916e15088829107f66f3/drivers/leds/leds-pm8xxx-htc.c" class="minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->


            <a class="octicon-button disabled tooltipped tooltipped-w" href="#"
               aria-label="You must be signed in to make or propose changes"><span class="octicon octicon-pencil"></span></a>

          <a class="octicon-button danger disabled tooltipped tooltipped-w" href="#"
             aria-label="You must be signed in to make or propose changes">
          <span class="octicon octicon-trashcan"></span>
        </a>
      </div><!-- /.actions -->
    </div>
    

  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code js-file-line"><span class="pl-c">/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code js-file-line"><span class="pl-c"> * This program is free software; you can redistribute it and/or modify</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code js-file-line"><span class="pl-c"> * it under the terms of the GNU General Public License version 2 and</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code js-file-line"><span class="pl-c"> * only version 2 as published by the Free Software Foundation.</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code js-file-line"><span class="pl-c"> * This program is distributed in the hope that it will be useful,</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code js-file-line"><span class="pl-c"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code js-file-line"><span class="pl-c"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code js-file-line"><span class="pl-c"> * GNU General Public License for more details.</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">pr_fmt</span>(<span class="pl-v">fmt</span>)	<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: <span class="pl-pds">&quot;</span></span> fmt, __func__</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/kernel.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/module.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/init.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/slab.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/platform_device.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/leds.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/workqueue.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/err.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/wakelock.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/mfd/pm8xxx/core.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/mfd/pm8xxx/pwm.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/leds-pm8xxx-htc.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/input.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s1"><span class="pl-pds">&lt;</span>linux/input/cy8c_cs.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SSBI_REG_ADDR_DRV_KEYPAD</span>	0x48</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_KEYPAD_BL_MASK</span>	0xf0</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_KEYPAD_BL_SHIFT</span>	0x04</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SSBI_REG_ADDR_FLASH_DRV0</span>        0x49</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_FLASH_MASK</span>           0xf0</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_FLASH_SHIFT</span>          0x04</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SSBI_REG_ADDR_FLASH_DRV1</span>        0xFB</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SSBI_REG_ADDR_LED_CTRL_BASE</span>	0x131</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SSBI_REG_ADDR_LED_CTRL</span>(<span class="pl-v">n</span>)	(SSBI_REG_ADDR_LED_CTRL_BASE + (n))</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_LED_CTRL_MASK</span>	0xf8</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_DRV_LED_CTRL_SHIFT</span>	0x03</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_FLASH_LED_CURRENT</span>		<span class="pl-c1">300</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_LC_LED_CURRENT</span>		<span class="pl-c1">40</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_KP_BL_LED_CURRENT</span>		<span class="pl-c1">300</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_ID_LED_CURRENT_FACTOR</span>	<span class="pl-c1">2</span>  </td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_ID_FLASH_CURRENT_FACTOR</span>	<span class="pl-c1">20</span> </td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_FLASH_MODE_DBUS1</span>		<span class="pl-c1">1</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_FLASH_MODE_DBUS2</span>		<span class="pl-c1">2</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_FLASH_MODE_PWM</span>		<span class="pl-c1">3</span></td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_LED_OFFSET</span>(<span class="pl-v">id</span>) (PM8XXX_ID_LED_0 - (id))</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_LC_LED_BRIGHTNESS</span>		<span class="pl-c1">20</span></td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_FLASH_BRIGHTNESS</span>		<span class="pl-c1">15</span></td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MAX_KB_LED_BRIGHTNESS</span>		<span class="pl-c1">15</span></td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PM8XXX_LPG_CTL_REGS</span>		<span class="pl-c1">7</span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">LED_DBG</span>(fmt, ...) \</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code js-file-line">		({ <span class="pl-k">if</span> (<span class="pl-c1">0</span>) <span class="pl-s3">printk</span>(KERN_DEBUG <span class="pl-s1"><span class="pl-pds">&quot;</span>[LED]<span class="pl-pds">&quot;</span></span> fmt, ##__VA_ARGS__); })</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">LED_INFO</span>(fmt, ...) \</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code js-file-line">		<span class="pl-en">printk</span>(KERN_INFO <span class="pl-s1"><span class="pl-pds">&quot;</span>[LED]<span class="pl-pds">&quot;</span></span> fmt, ##__VA_ARGS__)</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">LED_ERR</span>(fmt, ...) \</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code js-file-line">		<span class="pl-en">printk</span>(KERN_ERR <span class="pl-s1"><span class="pl-pds">&quot;</span>[LED][ERR]<span class="pl-pds">&quot;</span></span> fmt, ##__VA_ARGS__)</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code js-file-line">static struct workqueue_struct *g_led_work_queue;</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code js-file-line"><span class="pl-st">struct</span> wake_lock pmic_led_wake_lock;</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">struct</span> pm8xxx_led_data *pm8xxx_leds	, *for_key_led_data, *green_back_led_data, *amber_back_led_data;</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> flag_hold_virtual_key = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> virtual_key_state;</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> current_blink = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> lut_coefficient = <span class="pl-c1">100</span>;</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> dutys_array[<span class="pl-c1">64</span>];</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> bln = <span class="pl-c1">1</span>; </td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code js-file-line">u8 <span class="pl-en">pm8xxxx_led_pwm_mode</span>(<span class="pl-st">int</span> flag)</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code js-file-line">	u8 mode = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code js-file-line">	<span class="pl-k">switch</span> (flag) {</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code js-file-line">	<span class="pl-k">case</span> PM8XXX_ID_LED_0:</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code js-file-line">		mode = PM8XXX_LED_MODE_PWM3;</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code js-file-line">	<span class="pl-k">case</span> PM8XXX_ID_LED_1:</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code js-file-line">		mode = PM8XXX_LED_MODE_PWM2;</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code js-file-line">	<span class="pl-k">case</span> PM8XXX_ID_LED_2:</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code js-file-line">		mode = PM8XXX_LED_MODE_PWM1;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code js-file-line">	<span class="pl-k">return</span> mode;</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-en">led_fade_do_work</span>(<span class="pl-st">struct</span> work_struct *work)</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led;</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code js-file-line">	<span class="pl-st">int</span> rc, offset;</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code js-file-line">	u8 level;</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code js-file-line">	led = <span class="pl-s3">container_of</span>(work, <span class="pl-st">struct</span> pm8xxx_led_data, fade_delayed_work.<span class="pl-vo">work</span>);</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code js-file-line">	level = (<span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code js-file-line">	offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(led-&gt;id);</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code js-file-line">	led-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code js-file-line">	led-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code js-file-line">	rc = <span class="pl-s3">pm8xxx_writeb</span>(led-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), led-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code js-file-line">	<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code js-file-line">		<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, led-&gt;id, rc);</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code js-file-line"><span class="pl-st">void</span> <span class="pl-en">pm8xxx_led_current_set_for_key</span>(<span class="pl-st">int</span> brightness_key)</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code js-file-line">	<span class="pl-st">int</span> rc, offset;</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code js-file-line">	<span class="pl-s">static</span> u8 level, register_key;</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> brightness_key: <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__,brightness_key);</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code js-file-line">	<span class="pl-s3">printk</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>[BB] current_set_for_key  <span class="pl-c1">%d</span> <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, brightness_key); </td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code js-file-line">	<span class="pl-k">if</span> (brightness_key) {</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code js-file-line">		flag_hold_virtual_key = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code js-file-line">		level = (<span class="pl-c1">40</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code js-file-line">		offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code js-file-line">		register_key	= <span class="pl-s3">pm8xxxx_led_pwm_mode</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code js-file-line">		register_key &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code js-file-line">		register_key |= level;</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code js-file-line">		rc = <span class="pl-s3">pm8xxx_writeb</span>(for_key_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), register_key);</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code js-file-line">		<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code js-file-line">			<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, PM8XXX_ID_LED_0, rc);</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(for_key_led_data-&gt;pwm_led, <span class="pl-c1">320000</span>, <span class="pl-c1">640000</span>);</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(for_key_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(for_key_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code js-file-line">		level = (<span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code js-file-line">		offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code js-file-line">		register_key	= <span class="pl-s3">pm8xxxx_led_pwm_mode</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code js-file-line">		register_key &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code js-file-line">		register_key |= level;</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code js-file-line">		rc = <span class="pl-s3">pm8xxx_writeb</span>(for_key_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), register_key);</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code js-file-line">		<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code js-file-line">			<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, PM8XXX_ID_LED_0, rc);</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code js-file-line">		<span class="pl-k">if</span> (virtual_key_state != <span class="pl-c1">0</span>){</td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code js-file-line">			level = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code js-file-line">			register_key = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code js-file-line">			level = (<span class="pl-c1">40</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code js-file-line">			register_key    = <span class="pl-s3">pm8xxxx_led_pwm_mode</span>(for_key_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code js-file-line">			register_key &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code js-file-line">			register_key |= level;</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(for_key_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), register_key);</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code js-file-line">			<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, PM8XXX_ID_LED_0, rc);</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(for_key_led_data-&gt;pwm_led, <span class="pl-c1">64000</span>, <span class="pl-c1">64000</span>);</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(for_key_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code js-file-line">		flag_hold_virtual_key = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code js-file-line"><span class="pl-st">struct</span> led_classdev *led_cdev_buttons = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> buttons_led_is_blinking = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> buttons_led_is_on = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-en">pm8xxx_led_current_set_flagged</span>(<span class="pl-st">struct</span> led_classdev *led_cdev, <span class="pl-st">enum</span> led_brightness brightness,<span class="pl-st">int</span> blink)</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-en">pm8xxx_led_current_set</span>(<span class="pl-st">struct</span> led_classdev *led_cdev, <span class="pl-st">enum</span> led_brightness brightness)</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led = <span class="pl-s3">container_of</span>(led_cdev,  <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code js-file-line">	<span class="pl-st">int</span> rc, offset;</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code js-file-line">	u8 level;</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code js-file-line">	<span class="pl-st">int</span> *pduties;</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>, bank:<span class="pl-c1">%d</span>, brightness:<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, led-&gt;bank, brightness);</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code js-file-line">	<span class="pl-s3">cancel_delayed_work_sync</span>(&amp;led-&gt;fade_delayed_work);</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code js-file-line">	virtual_key_state = brightness;</td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code js-file-line">	<span class="pl-k">if</span> (flag_hold_virtual_key == <span class="pl-c1">1</span>) {</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code js-file-line">		<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>, key control <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__);</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code js-file-line">	<span class="pl-k">if</span>(brightness) {</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code js-file-line">		level = (led-&gt;out_current &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code js-file-line">		offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(led-&gt;id);</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code js-file-line">		led-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code js-file-line">		led-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code js-file-line">		rc = <span class="pl-s3">pm8xxx_writeb</span>(led-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), led-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code js-file-line">		<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code js-file-line">			<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, led-&gt;id, rc);</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code js-file-line">		<span class="pl-k">if</span> (led-&gt;function_flags &amp; LED_BRETH_FUNCTION) {</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code js-file-line">			pduties = &amp;dutys_array[<span class="pl-c1">0</span>];</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code js-file-line"><span class="pl-k">if</span> (blink == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code js-file-line">				buttons_led_is_on = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code js-file-line">				<span class="pl-c">// no blink needed</span></td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code js-file-line">#endif</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_config</span>(led-&gt;pwm_led,</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code js-file-line">						led-&gt;period_us,</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code js-file-line">						pduties,</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code js-file-line">						led-&gt;duty_time_ms,</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code js-file-line">						led-&gt;start_index,</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code js-file-line">						led-&gt;duites_size,</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code js-file-line">						<span class="pl-c1">0</span>, <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code js-file-line">						led-&gt;lut_flag);</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code js-file-line">} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code js-file-line">				pduties = led-&gt;duties;</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code js-file-line">				<span class="pl-c">// LUT_LOOP for blinking</span></td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code js-file-line">				<span class="pl-s3">pm8xxx_pwm_lut_config</span>(led-&gt;pwm_led,</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code js-file-line">							led-&gt;period_us,</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code js-file-line">							pduties,</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code js-file-line">							led-&gt;duty_time_ms, <span class="pl-c">// slower, 2x</span></td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code js-file-line">							led-&gt;start_index,</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code js-file-line">							led-&gt;duites_size * <span class="pl-c1">8</span>, <span class="pl-c">// 16 duty entries -&gt; original size * 2, + 6 * 8 zeroes for pause</span></td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code js-file-line">							<span class="pl-c1">0</span>, <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code js-file-line">							PM_PWM_LUT_LOOP | PM_PWM_LUT_PAUSE_HI_EN);</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_enable</span>(led-&gt;pwm_led, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_enable</span>(led-&gt;pwm_led, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code js-file-line">		} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(led-&gt;pwm_led, <span class="pl-c1">6400</span> * led-&gt;pwm_coefficient / <span class="pl-c1">100</span>, <span class="pl-c1">6400</span>);</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(led-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code js-file-line">		<span class="pl-k">if</span> (led-&gt;function_flags &amp; LED_BRETH_FUNCTION) {</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code js-file-line">			buttons_led_is_on = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code js-file-line">			<span class="pl-s3">wake_lock_timeout</span>(&amp;pmic_led_wake_lock, HZ*<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code js-file-line">			pduties = &amp;dutys_array[<span class="pl-c1">8</span>];</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_config</span>(led-&gt;pwm_led,</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code js-file-line">						led-&gt;period_us,</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code js-file-line">						pduties,</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code js-file-line">						led-&gt;duty_time_ms,</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code js-file-line">						led-&gt;start_index,</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code js-file-line">						led-&gt;duites_size,</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code js-file-line">						<span class="pl-c1">0</span>, <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code js-file-line">						led-&gt;lut_flag);</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_enable</span>(led-&gt;pwm_led, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_pwm_lut_enable</span>(led-&gt;pwm_led, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code js-file-line">			<span class="pl-s3">queue_delayed_work</span>(g_led_work_queue,</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code js-file-line">						&amp;led-&gt;fade_delayed_work,</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code js-file-line">						<span class="pl-s3">msecs_to_jiffies</span>(led-&gt;duty_time_ms*led-&gt;duites_size));</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code js-file-line">		} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(led-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code js-file-line">			level = (<span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(led-&gt;id);</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code js-file-line">			led-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code js-file-line">			led-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(led-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), led-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code js-file-line">			<span class="pl-k">if</span> (rc)</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span> can&#39;t set (<span class="pl-c1">%d</span>) led value rc=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, led-&gt;id, rc);</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> buttons_turning_on_with_screen_on = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">pm8xxx_led_current_set</span>(<span class="pl-st">struct</span> led_classdev *led_cdev, <span class="pl-st">enum</span> led_brightness brightness)</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code js-file-line">	<span class="pl-c">// checking for buttons device</span></td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code js-file-line">	<span class="pl-k">if</span> (led_cdev_buttons == led_cdev)</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code js-file-line">		<span class="pl-s3">printk</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>[BB] led_current_set <span class="pl-c1">%d</span> <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, brightness);</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code js-file-line">		<span class="pl-k">if</span> (brightness&gt;<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code js-file-line">			<span class="pl-c">// screen turning off together with buttons led</span></td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code js-file-line">			buttons_turning_on_with_screen_on = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code js-file-line">		} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code js-file-line">			<span class="pl-c">// screen turning off together without buttons led</span></td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code js-file-line">			buttons_turning_on_with_screen_on = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code js-file-line">	<span class="pl-c">// no blink needed</span></td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code js-file-line">	<span class="pl-s3">pm8xxx_led_current_set_flagged</span>( led_cdev, brightness, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">pm8xxx_buttons_blink</span>(<span class="pl-st">int</span> on)</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code js-file-line">	<span class="pl-k">if</span> (on &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code js-file-line">		<span class="pl-s3">printk</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>[BB] blink on  screen: <span class="pl-c1">%d</span> j: <span class="pl-c1">%lu</span> <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, <span class="pl-s3">touchscreen_is_on</span>(), jiffies);</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code js-file-line">		<span class="pl-k">if</span> (buttons_led_is_on == <span class="pl-c1">1</span>) <span class="pl-k">return</span>; <span class="pl-c">// already lit, dont blink</span></td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code js-file-line">		<span class="pl-k">if</span> (<span class="pl-s3">touchscreen_is_on</span>() == <span class="pl-c1">1</span>) <span class="pl-k">return</span>; <span class="pl-c">// touchscreen is on, dont blink</span></td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code js-file-line">		<span class="pl-s3">printk</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>[BLN] touchscreen_is_on(1): <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,<span class="pl-s3">touchscreen_is_on</span>());</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code js-file-line">		buttons_led_is_blinking = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code js-file-line">		<span class="pl-c">// start blinking (brightness = 1, blink flag needed = 1)</span></td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code js-file-line">		<span class="pl-s3">pm8xxx_led_current_set_flagged</span>(led_cdev_buttons, <span class="pl-c1">1</span>, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code js-file-line">		<span class="pl-s3">printk</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>[BB] blink off  screen: <span class="pl-c1">%d</span> j: <span class="pl-c1">%lu</span> <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, <span class="pl-s3">touchscreen_is_on</span>(), jiffies);</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code js-file-line">		<span class="pl-k">if</span> (buttons_led_is_blinking == <span class="pl-c1">0</span>) <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code js-file-line">		buttons_led_is_blinking = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code js-file-line">		<span class="pl-k">if</span> (<span class="pl-s3">touchscreen_is_on</span>() == <span class="pl-c1">1</span> &amp;&amp; buttons_turning_on_with_screen_on == <span class="pl-c1">1</span>) <span class="pl-k">return</span>; <span class="pl-c">// touchscreen is on, button light already override the blinking, dont turn off</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code js-file-line">		<span class="pl-c">// start blinking (brightness = 0, blink flag needed = indifferent)</span></td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code js-file-line">		<span class="pl-s3">pm8xxx_led_current_set_flagged</span>(led_cdev_buttons, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">pm8xxx_led_gpio_set</span>(<span class="pl-st">struct</span> led_classdev *led_cdev, <span class="pl-st">enum</span> led_brightness brightness)</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code js-file-line">	<span class="pl-st">int</span> rc, offset;</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code js-file-line">	u8 level;</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led = <span class="pl-s3">container_of</span>(led_cdev,  <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>, bank:<span class="pl-c1">%d</span>, brightness:<span class="pl-c1">%d</span> sync: <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, led-&gt;bank, brightness, led-&gt;led_sync);</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code js-file-line">	<span class="pl-k">if</span> (led-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code js-file-line">		led-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code js-file-line">	<span class="pl-s3">pwm_disable</span>(led-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code js-file-line">	<span class="pl-k">if</span>(led-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code js-file-line">			<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code js-file-line">				green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code js-file-line">			level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(green_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code js-file-line">			green_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code js-file-line">			green_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(green_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), green_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code js-file-line">			<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code js-file-line">				amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code js-file-line">			level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(amber_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code js-file-line">			amber_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code js-file-line">			amber_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(amber_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), amber_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code js-file-line">	<span class="pl-k">if</span> (brightness) {</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code js-file-line">		<span class="pl-k">if</span> (led-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code js-file-line">			led-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code js-file-line">		<span class="pl-s3">pwm_config</span>(led-&gt;pwm_led, <span class="pl-c1">6400</span> * led-&gt;pwm_coefficient / <span class="pl-c1">100</span>, <span class="pl-c1">6400</span>);</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code js-file-line">		<span class="pl-s3">pwm_enable</span>(led-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code js-file-line">		<span class="pl-k">if</span>(led-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code js-file-line">			<span class="pl-k">if</span> 	(!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code js-file-line">				<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code js-file-line">					green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code js-file-line">				level = (green_back_led_data-&gt;out_current &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code js-file-line">				offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(green_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code js-file-line">				green_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code js-file-line">				green_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code js-file-line">				rc = <span class="pl-s3">pm8xxx_writeb</span>(green_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), green_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(green_back_led_data-&gt;pwm_led, <span class="pl-c1">64000</span>, <span class="pl-c1">64000</span>);</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code js-file-line">			<span class="pl-k">if</span> 	(!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code js-file-line">				<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code js-file-line">					amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code js-file-line">				level = (amber_back_led_data-&gt;out_current &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code js-file-line">				offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(amber_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code js-file-line">				amber_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code js-file-line">				amber_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code js-file-line">				rc = <span class="pl-s3">pm8xxx_writeb</span>(amber_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), amber_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(amber_back_led_data-&gt;pwm_led, <span class="pl-c1">64000</span>, <span class="pl-c1">64000</span>);</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">led_work_func</span>(<span class="pl-st">struct</span> work_struct *work)</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code js-file-line">	<span class="pl-st">int</span> rc, offset;</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code js-file-line">	u8 level;</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(work, <span class="pl-st">struct</span> pm8xxx_led_data, led_work);</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: bank <span class="pl-c1">%d</span> sync <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, ldata-&gt;bank, ldata-&gt;led_sync);</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code js-file-line">	<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code js-file-line">	<span class="pl-k">if</span> (ldata-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code js-file-line">		ldata-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code js-file-line">	<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code js-file-line">			<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code js-file-line">				green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code js-file-line">			level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(green_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code js-file-line">			green_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code js-file-line">			green_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(green_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), green_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code js-file-line">			<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code js-file-line">				amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code js-file-line">			level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code js-file-line">			offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(amber_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code js-file-line">			amber_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code js-file-line">			amber_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code js-file-line">			rc = <span class="pl-s3">pm8xxx_writeb</span>(amber_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), amber_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">led_alarm_handler</span>(<span class="pl-st">struct</span> <span class="pl-s3">alarm</span> *<span class="pl-s3">alarm</span>)</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(<span class="pl-s3">alarm</span>, <span class="pl-st">struct</span> pm8xxx_led_data, led_alarm);</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code js-file-line">	<span class="pl-s3">queue_work</span>(g_led_work_queue, &amp;ldata-&gt;led_work);</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> <span class="pl-vo">led_blink_do_work</span>(<span class="pl-st">struct</span> work_struct *work)</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led;</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code js-file-line">	led = <span class="pl-s3">container_of</span>(work, <span class="pl-st">struct</span> pm8xxx_led_data, blink_delayed_work.<span class="pl-vo">work</span>);</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code js-file-line">	<span class="pl-k">if</span> (led-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code js-file-line">		led-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code js-file-line">	<span class="pl-s3">pwm_config</span>(led-&gt;pwm_led, led-&gt;duty_time_ms * <span class="pl-c1">1000</span>, led-&gt;period_us);</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code js-file-line">	<span class="pl-s3">pwm_enable</span>(led-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code js-file-line">	<span class="pl-k">if</span>(led-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code js-file-line">		<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code js-file-line">			<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code js-file-line">				green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(green_back_led_data-&gt;pwm_led, green_back_led_data-&gt;duty_time_ms * <span class="pl-c1">1000</span>, green_back_led_data-&gt;period_us);</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code js-file-line">		<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(led-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code js-file-line">			<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code js-file-line">				amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(amber_back_led_data-&gt;pwm_led, amber_back_led_data-&gt;duty_time_ms * <span class="pl-c1">1000</span>, amber_back_led_data-&gt;period_us);</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_bln_show</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code js-file-line">					<span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code js-file-line">					<span class="pl-st">char</span> *buf)</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">sprintf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, bln);</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_bln_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code js-file-line">				       <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code js-file-line">				       <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code js-file-line">	<span class="pl-st">int</span> val;</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code js-file-line">	val = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%u</span><span class="pl-pds">&quot;</span></span>, &amp;val);</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code js-file-line">	<span class="pl-k">if</span> (val &lt; <span class="pl-c1">0</span> || val &gt; <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code js-file-line">	bln = val;</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(bln, <span class="pl-c1">0644</span>, pm8xxx_bln_show, pm8xxx_bln_store);</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_blink_show</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code js-file-line">					<span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code js-file-line">					<span class="pl-st">char</span> *buf)</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">sprintf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, current_blink);</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_blink_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code js-file-line">				       <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code js-file-line">				       <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code js-file-line">	<span class="pl-st">int</span> val;</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code js-file-line">	<span class="pl-st">int</span> level, offset;</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code js-file-line">	val = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%u</span><span class="pl-pds">&quot;</span></span>, &amp;val);</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code js-file-line">	<span class="pl-k">if</span> (val &lt; <span class="pl-c1">0</span> || val &gt; <span class="pl-c1">255</span>)</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code js-file-line">	current_blink= val;</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *) <span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: bank <span class="pl-c1">%d</span> blink <span class="pl-c1">%d</span> sync <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, ldata-&gt;bank, val, ldata-&gt;led_sync);</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code js-file-line">	<span class="pl-k">switch</span> (val) {</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_STOP:</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code js-file-line">		<span class="pl-k">if</span> (ldata-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code js-file-line">			ldata-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code js-file-line">		<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code js-file-line">			<span class="pl-k">if</span> 	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code js-file-line">				<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code js-file-line">					green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code js-file-line">			<span class="pl-k">if</span> 	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code js-file-line">				<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code js-file-line">					amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code js-file-line">		<span class="pl-k">if</span> (bln &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_buttons_blink</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_UNCHANGE:</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code js-file-line">		<span class="pl-k">if</span> (led_cdev-&gt;brightness) {</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code js-file-line">			<span class="pl-k">if</span> (ldata-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code js-file-line">				ldata-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code js-file-line">			<span class="pl-s3">pwm_config</span>(ldata-&gt;pwm_led, <span class="pl-c1">6400</span> * ldata-&gt;pwm_coefficient / <span class="pl-c1">100</span>, <span class="pl-c1">6400</span>);</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code js-file-line">			<span class="pl-s3">pwm_enable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code js-file-line">			<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code js-file-line">				<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code js-file-line">					<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code js-file-line">						green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code js-file-line">					<span class="pl-s3">pwm_config</span>(green_back_led_data-&gt;pwm_led, <span class="pl-c1">64000</span>, <span class="pl-c1">64000</span>);</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code js-file-line">					<span class="pl-s3">pwm_enable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code js-file-line">				<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code js-file-line">					<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code js-file-line">						amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code js-file-line">					<span class="pl-s3">pwm_config</span>(amber_back_led_data-&gt;pwm_led, <span class="pl-c1">64000</span>, <span class="pl-c1">64000</span>);</td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code js-file-line">					<span class="pl-s3">pwm_enable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code js-file-line">			<span class="pl-k">if</span> (bln &gt; <span class="pl-c1">0</span> &amp;&amp; val &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code js-file-line">				<span class="pl-s3">pm8xxx_buttons_blink</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code js-file-line">		} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code js-file-line">			<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code js-file-line">			<span class="pl-k">if</span> (ldata-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code js-file-line">				ldata-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code js-file-line">			<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code js-file-line">				<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code js-file-line">					<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code js-file-line">						green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code js-file-line">					<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code js-file-line">					level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code js-file-line">					offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(green_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code js-file-line">					green_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code js-file-line">					green_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code js-file-line">					<span class="pl-s3">pm8xxx_writeb</span>(green_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), green_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code js-file-line">				<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)){</td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code js-file-line">					<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code js-file-line">						amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code js-file-line">					<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code js-file-line">					level = ( <span class="pl-c1">0</span> &lt;&lt; PM8XXX_DRV_LED_CTRL_SHIFT) &amp; PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code js-file-line">					offset = <span class="pl-s3">PM8XXX_LED_OFFSET</span>(amber_back_led_data-&gt;id);</td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code js-file-line">					amber_back_led_data-&gt;reg &amp;= ~PM8XXX_DRV_LED_CTRL_MASK;</td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code js-file-line">					amber_back_led_data-&gt;reg |= level;</td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code js-file-line">					<span class="pl-s3">pm8xxx_writeb</span>(amber_back_led_data-&gt;dev-&gt;parent, <span class="pl-s3">SSBI_REG_ADDR_LED_CTRL</span>(offset), amber_back_led_data-&gt;reg);</td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code js-file-line">			<span class="pl-k">if</span> (bln &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code js-file-line">				<span class="pl-s3">pm8xxx_buttons_blink</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_64MS_PER_2SEC:</td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code js-file-line">		<span class="pl-k">if</span> (ldata-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code js-file-line">			ldata-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code js-file-line">		<span class="pl-s3">pwm_config</span>(ldata-&gt;pwm_led, ldata-&gt;blink_duty_per_2sec, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code js-file-line">		<span class="pl-s3">pwm_enable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code js-file-line">		<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code js-file-line">				<span class="pl-k">if</span> (green_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code js-file-line">					green_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(green_back_led_data-&gt;pwm_led, ldata-&gt;blink_duty_per_2sec, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code js-file-line">				<span class="pl-k">if</span> (amber_back_led_data-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code js-file-line">					amber_back_led_data-&gt;<span class="pl-s3">gpio_status_switch</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(amber_back_led_data-&gt;pwm_led, ldata-&gt;blink_duty_per_2sec, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code js-file-line">		<span class="pl-k">if</span> (bln &gt; <span class="pl-c1">0</span> &amp;&amp; val &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code js-file-line">			<span class="pl-s3">pm8xxx_buttons_blink</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_64MS_ON_310MS_PER_2SEC:</td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code js-file-line">		<span class="pl-s3">cancel_delayed_work_sync</span>(&amp;ldata-&gt;blink_delayed_work);</td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code js-file-line">		ldata-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code js-file-line">		ldata-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code js-file-line">		<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code js-file-line">				green_back_led_data-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code js-file-line">				green_back_led_data-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code js-file-line">				amber_back_led_data-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code js-file-line">				amber_back_led_data-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code js-file-line">		<span class="pl-s3">queue_delayed_work</span>(g_led_work_queue, &amp;ldata-&gt;blink_delayed_work,</td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code js-file-line">				   <span class="pl-s3">msecs_to_jiffies</span>(<span class="pl-c1">310</span>));</td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_64MS_ON_2SEC_PER_2SEC:</td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code js-file-line">		<span class="pl-s3">cancel_delayed_work_sync</span>(&amp;ldata-&gt;blink_delayed_work);</td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code js-file-line">		ldata-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code js-file-line">		ldata-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code js-file-line">		<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code js-file-line">				green_back_led_data-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code js-file-line">				green_back_led_data-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code js-file-line">				amber_back_led_data-&gt;duty_time_ms = <span class="pl-c1">64</span>;</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code js-file-line">				amber_back_led_data-&gt;period_us = <span class="pl-c1">2000000</span>;</td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code js-file-line">		<span class="pl-s3">queue_delayed_work</span>(g_led_work_queue, &amp;ldata-&gt;blink_delayed_work,</td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code js-file-line">				   <span class="pl-s3">msecs_to_jiffies</span>(<span class="pl-c1">1000</span>));</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code js-file-line">	<span class="pl-k">case</span> BLINK_1SEC_PER_2SEC:</td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code js-file-line">		<span class="pl-s3">pwm_disable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code js-file-line">		<span class="pl-s3">pwm_config</span>(ldata-&gt;pwm_led, <span class="pl-c1">1000000</span>, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code js-file-line">		<span class="pl-s3">pwm_enable</span>(ldata-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code js-file-line">		<span class="pl-k">if</span>(ldata-&gt;led_sync) {</td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(green_back_led_data-&gt;pwm_led, <span class="pl-c1">1000000</span>, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(green_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code js-file-line">			<span class="pl-k">if</span>	(!<span class="pl-s3">strcmp</span>(ldata-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code js-file-line">				<span class="pl-s3">pwm_disable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code js-file-line">				<span class="pl-s3">pwm_config</span>(amber_back_led_data-&gt;pwm_led, <span class="pl-c1">1000000</span>, <span class="pl-c1">2000000</span>);</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code js-file-line">				<span class="pl-s3">pwm_enable</span>(amber_back_led_data-&gt;pwm_led);</td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code js-file-line">	<span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code js-file-line">		<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: bank <span class="pl-c1">%d</span> did not support blink type <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, ldata-&gt;bank, val);</td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(blink, <span class="pl-c1">0644</span>, pm8xxx_led_blink_show, pm8xxx_led_blink_store);</td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_off_timer_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code js-file-line">				   <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code js-file-line">				   <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code js-file-line">	<span class="pl-st">int</span> min, sec;</td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code js-file-line">	<span class="pl-s3">uint16_t</span> off_timer;</td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code js-file-line">	<span class="pl-s3">ktime_t</span> interval;</td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code js-file-line">	<span class="pl-s3">ktime_t</span> next_alarm;</td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code js-file-line">	min = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code js-file-line">	sec = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span> <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, &amp;min, &amp;sec);</td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code js-file-line">	<span class="pl-k">if</span> (min &lt; <span class="pl-c1">0</span> || min &gt; <span class="pl-c1">255</span>)</td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code js-file-line">	<span class="pl-k">if</span> (sec &lt; <span class="pl-c1">0</span> || sec &gt; <span class="pl-c1">255</span>)</td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *) <span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>Setting <span class="pl-c1">%s</span> off_timer to <span class="pl-c1">%d</span> min <span class="pl-c1">%d</span> sec <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, led_cdev-&gt;name, min, sec);</td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code js-file-line">	off_timer = min * <span class="pl-c1">60</span> + sec;</td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code js-file-line">	<span class="pl-s3">alarm_cancel</span>(&amp;ldata-&gt;led_alarm);</td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code js-file-line">	<span class="pl-s3">cancel_work_sync</span>(&amp;ldata-&gt;led_work);</td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code js-file-line">	<span class="pl-k">if</span> (off_timer) {</td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code js-file-line">		interval = <span class="pl-s3">ktime_set</span>(off_timer, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code js-file-line">		next_alarm = <span class="pl-s3">ktime_add</span>(<span class="pl-s3">alarm_get_elapsed_realtime</span>(), interval);</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code js-file-line">		<span class="pl-s3">alarm_start_range</span>(&amp;ldata-&gt;led_alarm, next_alarm, next_alarm);</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(off_timer, <span class="pl-c1">0644</span>, <span class="pl-c1">NULL</span>, pm8xxx_led_off_timer_store);</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_currents_show</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code js-file-line">					<span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code js-file-line">					<span class="pl-st">char</span> *buf)</td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *) <span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">sprintf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, ldata-&gt;out_current);</td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_currents_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code js-file-line">					 <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code js-file-line">					 <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code js-file-line">	<span class="pl-st">int</span> currents = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, &amp;currents);</td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code js-file-line">	<span class="pl-k">if</span> (currents &lt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *)<span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: bank <span class="pl-c1">%d</span> currents <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, ldata-&gt;bank, currents);</td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code js-file-line">	<span class="pl-k">if</span> (currents &lt;= <span class="pl-c1">60</span>)</td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code js-file-line">	ldata-&gt;out_current = currents;</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code js-file-line">	ldata-&gt;cdev.<span class="pl-s3">brightness_set</span>(led_cdev, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code js-file-line">	<span class="pl-k">if</span> (currents)</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code js-file-line">		ldata-&gt;cdev.<span class="pl-s3">brightness_set</span>(led_cdev, <span class="pl-c1">255</span>);</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(currents, <span class="pl-c1">0644</span>, pm8xxx_led_currents_show, pm8xxx_led_currents_store);</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_pwm_coefficient_show</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code js-file-line">					<span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code js-file-line">					<span class="pl-st">char</span> *buf)</td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *) <span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">sprintf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, ldata-&gt;pwm_coefficient);</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_pwm_coefficient_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code js-file-line">					 <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code js-file-line">					 <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code js-file-line">	<span class="pl-st">int</span> pwm_coefficient1 = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, &amp;pwm_coefficient1);</td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code js-file-line">	<span class="pl-k">if</span> ((pwm_coefficient1 &lt; <span class="pl-c1">0</span>) || (pwm_coefficient1 &gt; <span class="pl-c1">100</span>)) {</td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code js-file-line">		<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: pwm_coefficient = <span class="pl-c1">%d</span>, out of range.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code js-file-line">			__func__, pwm_coefficient1);</td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *)<span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: pwm_coefficient <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, pwm_coefficient1);</td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code js-file-line">	ldata-&gt;pwm_coefficient = pwm_coefficient1;</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(pwm_coefficient, <span class="pl-c1">0644</span>, pm8xxx_led_pwm_coefficient_show, pm8xxx_led_pwm_coefficient_store);</td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_lut_coefficient_show</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code js-file-line">					<span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code js-file-line">					<span class="pl-st">char</span> *buf)</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *) <span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">sprintf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, lut_coefficient);</td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-s3">ssize_t</span> <span class="pl-vo">pm8xxx_led_lut_coefficient_store</span>(<span class="pl-st">struct</span> device *dev,</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code js-file-line">					 <span class="pl-st">struct</span> device_attribute *attr,</td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code js-file-line">					 <span class="pl-s">const</span> <span class="pl-st">char</span> *buf, <span class="pl-s3">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code js-file-line">	<span class="pl-st">int</span> lut_coefficient1 = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code js-file-line">	<span class="pl-st">int</span> i;</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code js-file-line">	<span class="pl-st">struct</span> led_classdev *led_cdev;</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *ldata;</td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code js-file-line">	<span class="pl-s3">sscanf</span>(buf, <span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, &amp;lut_coefficient1);</td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code js-file-line">	<span class="pl-k">if</span> (lut_coefficient1 &lt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code js-file-line">	led_cdev = (<span class="pl-st">struct</span> led_classdev *)<span class="pl-s3">dev_get_drvdata</span>(dev);</td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code js-file-line">	ldata = <span class="pl-s3">container_of</span>(led_cdev, <span class="pl-st">struct</span> pm8xxx_led_data, cdev);</td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code js-file-line">	<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: lut_coefficient <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, lut_coefficient1);</td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; <span class="pl-c1">16</span>; i++) {</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code js-file-line">		dutys_array[i] = (*(ldata-&gt;duties + i)) * lut_coefficient1 / <span class="pl-c1">100</span>;</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code js-file-line">	lut_coefficient = lut_coefficient1;</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-vo">DEVICE_ATTR</span>(lut_coefficient, <span class="pl-c1">0644</span>, pm8xxx_led_lut_coefficient_show, pm8xxx_led_lut_coefficient_store);</td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> __devinit <span class="pl-vo">pm8xxx_led_probe</span>(<span class="pl-st">struct</span> platform_device *pdev)</td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code js-file-line">	<span class="pl-s">const</span> <span class="pl-st">struct</span> pm8xxx_led_platform_data *pdata = pdev-&gt;dev.<span class="pl-vo">platform_data</span>;</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_configure *curr_led;</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led, *led_dat;</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code js-file-line">	<span class="pl-st">int</span> i, j, ret = -ENOMEM;</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code js-file-line">	<span class="pl-k">if</span> (pdata == <span class="pl-c1">NULL</span>) {</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code js-file-line">		<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>platform data not supplied<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code js-file-line">		<span class="pl-k">return</span> -EINVAL;</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code js-file-line">	led = <span class="pl-s3">kcalloc</span>(pdata-&gt;num_leds + <span class="pl-c1">1</span>, <span class="pl-k">sizeof</span>(*led), GFP_KERNEL);</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code js-file-line">	<span class="pl-k">if</span> (led == <span class="pl-c1">NULL</span>) {</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code js-file-line">		<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>failed to alloc memory<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code js-file-line">		<span class="pl-k">return</span> -ENOMEM;</td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code js-file-line">	<span class="pl-s3">wake_lock_init</span>(&amp;pmic_led_wake_lock, WAKE_LOCK_SUSPEND, <span class="pl-s1"><span class="pl-pds">&quot;</span>pmic_led<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code js-file-line">	g_led_work_queue = <span class="pl-s3">create_workqueue</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>pm8xxx-led<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code js-file-line">	<span class="pl-k">if</span> (g_led_work_queue == <span class="pl-c1">NULL</span>) {</td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code js-file-line">		<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>failed to create workqueue<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code js-file-line">		<span class="pl-k">goto</span> err_create_work_queue;</td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; pdata-&gt;num_leds; i++) {</td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code js-file-line">		curr_led			= &amp;pdata-&gt;leds[i];</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code js-file-line">		led_dat				= &amp;led[i];</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code js-file-line">		led_dat-&gt;cdev.<span class="pl-vo">name</span>		= curr_led-&gt;name;</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code js-file-line">		led_dat-&gt;id     		= curr_led-&gt;flags;</td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code js-file-line">		led_dat-&gt;bank			= curr_led-&gt;flags;</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code js-file-line">		led_dat-&gt;function_flags		= curr_led-&gt;function_flags;</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code js-file-line">		led_dat-&gt;start_index		= curr_led-&gt;start_index;</td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code js-file-line">		led_dat-&gt;duty_time_ms		= curr_led-&gt;duty_time_ms;</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code js-file-line">		led_dat-&gt;period_us		= curr_led-&gt;period_us;</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code js-file-line">		led_dat-&gt;duites_size		= curr_led-&gt;duites_size;</td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code js-file-line">		led_dat-&gt;lut_flag		= curr_led-&gt;lut_flag;</td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code js-file-line">		led_dat-&gt;out_current		= curr_led-&gt;out_current;</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code js-file-line">		led_dat-&gt;duties			= &amp;(curr_led-&gt;duties[<span class="pl-c1">0</span>]);</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code js-file-line">		led_dat-&gt;led_sync		= curr_led-&gt;led_sync;</td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code js-file-line">		led_dat-&gt;pwm_led 		= <span class="pl-s3">pwm_request</span>(led_dat-&gt;bank, led_dat-&gt;cdev.<span class="pl-vo">name</span>);</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code js-file-line">		led_dat-&gt;lpm_power      = curr_led-&gt;lpm_power;</td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code js-file-line">		<span class="pl-k">if</span> (curr_led-&gt;duties[<span class="pl-c1">1</span>]) {</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code js-file-line">			<span class="pl-k">for</span> (j = <span class="pl-c1">0</span>; j &lt; <span class="pl-c1">64</span>; j++)</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code js-file-line">				dutys_array[j] = *(led_dat-&gt;duties + j);</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code js-file-line">		<span class="pl-k">if</span>( curr_led-&gt;pwm_coefficient &gt; <span class="pl-c1">0</span> )</td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code js-file-line">			led_dat-&gt;pwm_coefficient	= curr_led-&gt;pwm_coefficient;</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code js-file-line">			led_dat-&gt;pwm_coefficient	= <span class="pl-c1">100</span>;</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code js-file-line">		<span class="pl-k">if</span> (curr_led-&gt;blink_duty_per_2sec &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code js-file-line">			led_dat-&gt;blink_duty_per_2sec = curr_led-&gt;blink_duty_per_2sec;</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code js-file-line">			led_dat-&gt;blink_duty_per_2sec = <span class="pl-c1">64000</span>;</td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code js-file-line">		<span class="pl-k">switch</span> (led_dat-&gt;id) {</td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_GPIO24:</td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_GPIO25:</td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_GPIO26:</td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code js-file-line">			led_dat-&gt;cdev.<span class="pl-vo">brightness_set</span> = pm8xxx_led_gpio_set;</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code js-file-line">			<span class="pl-k">if</span> (curr_led-&gt;gpio_status_switch != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code js-file-line">				led_dat-&gt;gpio_status_switch = curr_led-&gt;gpio_status_switch;</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code js-file-line">			<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_LED_0:</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_LED_1:</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_LED_2:</td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code js-file-line">			led_dat-&gt;cdev.<span class="pl-vo">brightness_set</span>    = pm8xxx_led_current_set;</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code js-file-line">			<span class="pl-k">if</span> (led_dat-&gt;function_flags &amp; LED_PWM_FUNCTION) {</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code js-file-line">				led_dat-&gt;reg		= <span class="pl-s3">pm8xxxx_led_pwm_mode</span>(led_dat-&gt;id);</td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code js-file-line">				<span class="pl-s3">INIT_DELAYED_WORK</span>(&amp;led[i].<span class="pl-vo">fade_delayed_work</span>, led_fade_do_work);</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code js-file-line">			} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code js-file-line">				led_dat-&gt;reg		= PM8XXX_LED_MODE_MANUAL;</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code js-file-line">			<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code js-file-line">		<span class="pl-k">case</span> PM8XXX_ID_LED_KB_LIGHT:</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code js-file-line">			<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code js-file-line">		led_dat-&gt;cdev.<span class="pl-vo">brightness</span>	= LED_OFF;</td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code js-file-line">		led_dat-&gt;dev			= &amp;pdev-&gt;dev;</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code js-file-line">		ret = <span class="pl-s3">led_classdev_register</span>(&amp;pdev-&gt;dev, &amp;led_dat-&gt;cdev);</td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code js-file-line">		<span class="pl-k">if</span> (ret) {</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code js-file-line">			<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>unable to register led <span class="pl-c1">%d</span>,ret=<span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, led_dat-&gt;id, ret);</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code js-file-line">			<span class="pl-k">goto</span> err_register_led_cdev;</td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> CONFIG_BLN</td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code js-file-line">		<span class="pl-c">// blink buttons</span></td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code js-file-line">		<span class="pl-k">if</span> (led_dat-&gt;id == PM8XXX_ID_LED_0)</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code js-file-line">			<span class="pl-c">// storing buttons light dev for blinking</span></td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code js-file-line">			led_cdev_buttons = &amp;led_dat-&gt;cdev;</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_bln);</td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr currents<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_currents;</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code js-file-line">		<span class="pl-c">// blink buttons end</span></td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code js-file-line">		<span class="pl-k">if</span> (led_dat-&gt;id &gt;= PM8XXX_ID_LED_2 &amp;&amp; led_dat-&gt;id &lt;= PM8XXX_ID_LED_0) {</td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_currents);</td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr currents<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_currents;</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code js-file-line">		<span class="pl-k">if</span> (led_dat-&gt;id &gt;= PM8XXX_ID_LED_2 &amp;&amp; led_dat-&gt;id &lt;= PM8XXX_ID_LED_0) {</td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_lut_coefficient);</td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr lut_coefficient<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_lut_coefficient;</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code js-file-line">		<span class="pl-k">if</span> ((led_dat-&gt;id &lt;= PM8XXX_ID_GPIO26) || (led_dat-&gt;id &lt;= PM8XXX_ID_LED_2) ||</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code js-file-line">		    (led_dat-&gt;id &lt;= PM8XXX_ID_LED_1)) {</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_pwm_coefficient);</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr pwm_coefficient<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_pwm_coefficient;</td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code js-file-line">		<span class="pl-k">if</span> (led_dat-&gt;function_flags &amp; LED_BLINK_FUNCTION) {</td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code js-file-line">			<span class="pl-s3">INIT_DELAYED_WORK</span>(&amp;led[i].<span class="pl-vo">blink_delayed_work</span>, led_blink_do_work);</td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_blink);</td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr blink<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_blink;</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code js-file-line">			ret = <span class="pl-s3">device_create_file</span>(led_dat-&gt;cdev.<span class="pl-vo">dev</span>, &amp;dev_attr_off_timer);</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code js-file-line">			<span class="pl-k">if</span> (ret &lt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code js-file-line">				<span class="pl-s3">LED_ERR</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: Failed to create <span class="pl-c1">%d</span> attr off timer<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, i);</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code js-file-line">				<span class="pl-k">goto</span> err_register_attr_off_timer;</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code js-file-line">			<span class="pl-s3">alarm_init</span>(&amp;led[i].<span class="pl-vo">led_alarm</span>, ANDROID_ALARM_ELAPSED_REALTIME_WAKEUP, led_alarm_handler);</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code js-file-line">			<span class="pl-s3">INIT_WORK</span>(&amp;led[i].<span class="pl-vo">led_work</span>, led_work_func); </td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led_dat-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>button-backlight<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code js-file-line">			for_key_led_data = led_dat;</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led_dat-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>green-back<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code js-file-line">			<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: green-back, 000 probe, led_dat = <span class="pl-c1">%x</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__, (<span class="pl-st">unsigned</span> <span class="pl-st">int</span>)led_dat);</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code js-file-line">			green_back_led_data = led_dat;</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led_dat-&gt;cdev.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>amber-back<span class="pl-pds">&quot;</span></span>)) {</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code js-file-line">			<span class="pl-s3">LED_INFO</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span><span class="pl-c1">%s</span>: amber-back<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, __func__);</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code js-file-line">			amber_back_led_data = led_dat;</td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code js-file-line">	pm8xxx_leds = led;</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code js-file-line">	<span class="pl-s3">platform_set_drvdata</span>(pdev, led);</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code js-file-line">err_register_attr_off_timer:</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code js-file-line">			<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &amp; LED_BLINK_FUNCTION)</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_off_timer);</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code js-file-line">	i = pdata-&gt;num_leds;</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code js-file-line">err_register_attr_blink:</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code js-file-line">			<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &amp; LED_BLINK_FUNCTION)</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_blink);</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code js-file-line">	i = pdata-&gt;num_leds;</td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code js-file-line">err_register_attr_pwm_coefficient:</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code js-file-line">			<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &lt;= PM8XXX_ID_GPIO26)</td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_pwm_coefficient);</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code js-file-line">	i = pdata-&gt;num_leds;</td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code js-file-line">err_register_attr_lut_coefficient:</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code js-file-line">			<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &gt;= PM8XXX_ID_LED_2 &amp;&amp; led[i].<span class="pl-vo">function_flags</span> &lt;= PM8XXX_ID_LED_0)</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_lut_coefficient);</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code js-file-line">	i = pdata-&gt;num_leds;</td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code js-file-line">err_register_attr_currents:</td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code js-file-line">			<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &gt;= PM8XXX_ID_LED_2 &amp;&amp; led[i].<span class="pl-vo">function_flags</span> &lt;= PM8XXX_ID_LED_0)</td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_currents);</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code js-file-line">	i = pdata-&gt;num_leds;</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code js-file-line">err_register_led_cdev:</td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code js-file-line">	<span class="pl-k">if</span> (i &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code js-file-line">		<span class="pl-k">for</span> (i = i - <span class="pl-c1">1</span>; i &gt;= <span class="pl-c1">0</span>; i--) {</td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code js-file-line">			<span class="pl-s3">pwm_free</span>(led[i].<span class="pl-vo">pwm_led</span>);</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code js-file-line">			<span class="pl-s3">led_classdev_unregister</span>(&amp;led[i].<span class="pl-vo">cdev</span>);</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code js-file-line">	<span class="pl-s3">destroy_workqueue</span>(g_led_work_queue);</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code js-file-line">err_create_work_queue:</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code js-file-line">	<span class="pl-s3">kfree</span>(led);</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code js-file-line">	<span class="pl-s3">wake_lock_destroy</span>(&amp;pmic_led_wake_lock);</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code js-file-line">	<span class="pl-k">return</span> ret;</td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> __devexit <span class="pl-vo">pm8xxx_led_remove</span>(<span class="pl-st">struct</span> platform_device *pdev)</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code js-file-line">	<span class="pl-st">int</span> i;</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code js-file-line">	<span class="pl-s">const</span> <span class="pl-st">struct</span> led_platform_data *pdata =</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code js-file-line">				pdev-&gt;dev.<span class="pl-vo">platform_data</span>;</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led = <span class="pl-s3">platform_get_drvdata</span>(pdev);</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; pdata-&gt;num_leds; i++) {</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code js-file-line">		<span class="pl-s3">led_classdev_unregister</span>(&amp;led[i].<span class="pl-vo">cdev</span>);</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code js-file-line">		<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &gt;= PM8XXX_ID_LED_2 &amp;&amp; led[i].<span class="pl-vo">function_flags</span> &lt;= PM8XXX_ID_LED_0)</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code js-file-line">			<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_currents);</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code js-file-line">		<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &amp; LED_BLINK_FUNCTION)</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code js-file-line">			<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_blink);</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code js-file-line">		<span class="pl-k">if</span> (led[i].<span class="pl-vo">function_flags</span> &amp; LED_BLINK_FUNCTION)</td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code js-file-line">				<span class="pl-s3">device_remove_file</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">dev</span>, &amp;dev_attr_off_timer);</td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code js-file-line">	<span class="pl-s3">destroy_workqueue</span>(g_led_work_queue);</td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code js-file-line">	<span class="pl-s3">wake_lock_destroy</span>(&amp;pmic_led_wake_lock);</td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code js-file-line">	<span class="pl-s3">kfree</span>(led);</td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> <span class="pl-vo">pm8xxx_led_resume</span>(<span class="pl-st">struct</span> platform_device *pdev)</td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code js-file-line">	<span class="pl-st">int</span> i;</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code js-file-line">	<span class="pl-s">const</span> <span class="pl-st">struct</span> led_platform_data *pdata =</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code js-file-line">				pdev-&gt;dev.<span class="pl-vo">platform_data</span>;</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led = <span class="pl-s3">platform_get_drvdata</span>(pdev);</td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; pdata-&gt;num_leds; i++) {</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>button-backlight<span class="pl-pds">&quot;</span></span>) &amp;&amp; led[i].<span class="pl-vo">lpm_power</span>)</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code js-file-line">			led[i].<span class="pl-s3">lpm_power</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> <span class="pl-vo">pm8xxx_led_suspend</span>(<span class="pl-st">struct</span> platform_device *pdev, <span class="pl-s3">pm_message_t</span> state)</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code js-file-line">	<span class="pl-st">int</span> i;</td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code js-file-line">	<span class="pl-s">const</span> <span class="pl-st">struct</span> led_platform_data *pdata =</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code js-file-line">				pdev-&gt;dev.<span class="pl-vo">platform_data</span>;</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code js-file-line">	<span class="pl-st">struct</span> pm8xxx_led_data *led = <span class="pl-s3">platform_get_drvdata</span>(pdev);</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; pdata-&gt;num_leds; i++) {</td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code js-file-line">		<span class="pl-k">if</span> (!<span class="pl-s3">strcmp</span>(led[i].<span class="pl-vo">cdev</span>.<span class="pl-vo">name</span>, <span class="pl-s1"><span class="pl-pds">&quot;</span>button-backlight<span class="pl-pds">&quot;</span></span>) &amp;&amp; led[i].<span class="pl-vo">lpm_power</span>)</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code js-file-line">			led[i].<span class="pl-s3">lpm_power</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">struct</span> platform_driver pm8xxx_led_driver = {</td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code js-file-line">	.<span class="pl-vo">probe</span>		= pm8xxx_led_probe,</td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code js-file-line">	.<span class="pl-vo">suspend</span>    = pm8xxx_led_suspend,</td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code js-file-line">	.<span class="pl-vo">resume</span>     = pm8xxx_led_resume,</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code js-file-line">	.<span class="pl-vo">remove</span>		= <span class="pl-s3">__devexit_p</span>(pm8xxx_led_remove),</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code js-file-line">	.<span class="pl-vo">driver</span>		= {</td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code js-file-line">		.<span class="pl-vo">name</span>	= PM8XXX_LEDS_DEV_NAME,</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code js-file-line">		.<span class="pl-vo">owner</span>	= THIS_MODULE,</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code js-file-line">	},</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">int</span> __init <span class="pl-vo">pm8xxx_led_init</span>(<span class="pl-st">void</span>)</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code js-file-line">	<span class="pl-k">return</span> <span class="pl-s3">platform_driver_register</span>(&amp;pm8xxx_led_driver);</td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code js-file-line"><span class="pl-s3">subsys_initcall</span>(pm8xxx_led_init);</td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code js-file-line"><span class="pl-s">static</span> <span class="pl-st">void</span> __exit <span class="pl-vo">pm8xxx_led_exit</span>(<span class="pl-st">void</span>)</td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code js-file-line">	<span class="pl-s3">platform_driver_unregister</span>(&amp;pm8xxx_led_driver);</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code js-file-line"><span class="pl-s3">module_exit</span>(pm8xxx_led_exit);</td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code js-file-line"><span class="pl-s3">MODULE_DESCRIPTION</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>PM8XXX LEDs driver<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code js-file-line"><span class="pl-s3">MODULE_LICENSE</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>GPL v2<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code js-file-line"><span class="pl-s3">MODULE_VERSION</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>1.0<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code js-file-line"><span class="pl-s3">MODULE_ALIAS</span>(<span class="pl-s1"><span class="pl-pds">&quot;</span>platform:pm8xxx-led<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
</table>

  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="https://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.05128s from github-fe121-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-af95b05cb14b7a29b0457c26b4a1d24151f4a47842c8e74bd556622f347b9d3d.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-095c6fbcc5976c22018626149d313ec01de23839bd4f1e04be845664c06f00c4.js" type="text/javascript"></script>
      
      
  </body>
</html>

=======
/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#define pr_fmt(fmt)	"%s: " fmt, __func__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/platform_device.h>
#include <linux/leds.h>
#include <linux/workqueue.h>
#include <linux/err.h>
#include <linux/wakelock.h>
#include <linux/mfd/pm8xxx/core.h>
#include <linux/mfd/pm8xxx/pwm.h>
#include <linux/leds-pm8xxx-htc.h>

#ifdef CONFIG_BLN
#include <linux/input.h>
#include <linux/input/cy8c_cs.h>
#endif

#define SSBI_REG_ADDR_DRV_KEYPAD	0x48
#define PM8XXX_DRV_KEYPAD_BL_MASK	0xf0
#define PM8XXX_DRV_KEYPAD_BL_SHIFT	0x04

#define SSBI_REG_ADDR_FLASH_DRV0        0x49
#define PM8XXX_DRV_FLASH_MASK           0xf0
#define PM8XXX_DRV_FLASH_SHIFT          0x04

#define SSBI_REG_ADDR_FLASH_DRV1        0xFB

#define SSBI_REG_ADDR_LED_CTRL_BASE	0x131
#define SSBI_REG_ADDR_LED_CTRL(n)	(SSBI_REG_ADDR_LED_CTRL_BASE + (n))
#define PM8XXX_DRV_LED_CTRL_MASK	0xf8
#define PM8XXX_DRV_LED_CTRL_SHIFT	0x03

#define MAX_FLASH_LED_CURRENT		300
#define MAX_LC_LED_CURRENT		40
#define MAX_KP_BL_LED_CURRENT		300

#define PM8XXX_ID_LED_CURRENT_FACTOR	2  
#define PM8XXX_ID_FLASH_CURRENT_FACTOR	20 

#define PM8XXX_FLASH_MODE_DBUS1		1
#define PM8XXX_FLASH_MODE_DBUS2		2
#define PM8XXX_FLASH_MODE_PWM		3

#define PM8XXX_LED_OFFSET(id) (PM8XXX_ID_LED_0 - (id))

#define MAX_LC_LED_BRIGHTNESS		20
#define MAX_FLASH_BRIGHTNESS		15
#define MAX_KB_LED_BRIGHTNESS		15

#define PM8XXX_LPG_CTL_REGS		7

#define LED_DBG(fmt, ...) \
		({ if (0) printk(KERN_DEBUG "[LED]" fmt, ##__VA_ARGS__); })
#define LED_INFO(fmt, ...) \
		printk(KERN_INFO "[LED]" fmt, ##__VA_ARGS__)
#define LED_ERR(fmt, ...) \
		printk(KERN_ERR "[LED][ERR]" fmt, ##__VA_ARGS__)

static struct workqueue_struct *g_led_work_queue;
struct wake_lock pmic_led_wake_lock;
static struct pm8xxx_led_data *pm8xxx_leds	, *for_key_led_data, *green_back_led_data, *amber_back_led_data;
static int flag_hold_virtual_key = 0;
static int virtual_key_state;
static int current_blink = 0;
static int lut_coefficient = 100;
static int dutys_array[64];

#ifdef CONFIG_BLN
static int bln = 1; 
#endif

u8 pm8xxxx_led_pwm_mode(int flag)
{
	u8 mode = 0;
	switch (flag) {
	case PM8XXX_ID_LED_0:
		mode = PM8XXX_LED_MODE_PWM3;
		break;
	case PM8XXX_ID_LED_1:
		mode = PM8XXX_LED_MODE_PWM2;
		break;
	case PM8XXX_ID_LED_2:
		mode = PM8XXX_LED_MODE_PWM1;
		break;
	}
	return mode;
}

static void led_fade_do_work(struct work_struct *work)
{
	struct pm8xxx_led_data *led;
	int rc, offset;
	u8 level;

	led = container_of(work, struct pm8xxx_led_data, fade_delayed_work.work);

	level = (0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
	offset = PM8XXX_LED_OFFSET(led->id);
	led->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
	led->reg |= level;
	rc = pm8xxx_writeb(led->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), led->reg);
	if (rc)
		LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, led->id, rc);
}
void pm8xxx_led_current_set_for_key(int brightness_key)
{
	int rc, offset;
	static u8 level, register_key;

	LED_INFO("%s brightness_key: %d\n", __func__,brightness_key);

#ifdef CONFIG_BLN
	printk("[BB] current_set_for_key  %d \n", brightness_key); 
#endif

	if (brightness_key) {
		flag_hold_virtual_key = 1;
		level = (40 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
		offset = PM8XXX_LED_OFFSET(for_key_led_data->id);
		register_key	= pm8xxxx_led_pwm_mode(for_key_led_data->id);
		register_key &= ~PM8XXX_DRV_LED_CTRL_MASK;
		register_key |= level;
		rc = pm8xxx_writeb(for_key_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), register_key);
		if (rc)
			LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, PM8XXX_ID_LED_0, rc);
			pwm_config(for_key_led_data->pwm_led, 320000, 640000);
			pwm_enable(for_key_led_data->pwm_led);
	} else {
		pwm_disable(for_key_led_data->pwm_led);
		level = (0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
		offset = PM8XXX_LED_OFFSET(for_key_led_data->id);
		register_key	= pm8xxxx_led_pwm_mode(for_key_led_data->id);
		register_key &= ~PM8XXX_DRV_LED_CTRL_MASK;
		register_key |= level;
		rc = pm8xxx_writeb(for_key_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), register_key);
		if (rc)
			LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, PM8XXX_ID_LED_0, rc);
		if (virtual_key_state != 0){
			level = 0;
			register_key = 0;
			level = (40 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(for_key_led_data->id);
			register_key    = pm8xxxx_led_pwm_mode(for_key_led_data->id);
			register_key &= ~PM8XXX_DRV_LED_CTRL_MASK;
			register_key |= level;
			rc = pm8xxx_writeb(for_key_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), register_key);
			if (rc)
				LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, PM8XXX_ID_LED_0, rc);
			pwm_config(for_key_led_data->pwm_led, 64000, 64000);
			pwm_enable(for_key_led_data->pwm_led);
		}
		flag_hold_virtual_key = 0;

	}
}

#ifdef CONFIG_BLN
struct led_classdev *led_cdev_buttons = 0;
static int buttons_led_is_blinking = 0;
static int buttons_led_is_on = 0;

static void pm8xxx_led_current_set_flagged(struct led_classdev *led_cdev, enum led_brightness brightness,int blink)
#else
static void pm8xxx_led_current_set(struct led_classdev *led_cdev, enum led_brightness brightness)
#endif
{
	struct pm8xxx_led_data *led = container_of(led_cdev,  struct pm8xxx_led_data, cdev);
	int rc, offset;
	u8 level;

	int *pduties;

	LED_INFO("%s, bank:%d, brightness:%d\n", __func__, led->bank, brightness);
	cancel_delayed_work_sync(&led->fade_delayed_work);
	virtual_key_state = brightness;
	if (flag_hold_virtual_key == 1) {
		LED_INFO("%s, key control \n", __func__);
		return;
	}

	if(brightness) {
		level = (led->out_current << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
		offset = PM8XXX_LED_OFFSET(led->id);
		led->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
		led->reg |= level;
		rc = pm8xxx_writeb(led->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), led->reg);
		if (rc)
			LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, led->id, rc);

		if (led->function_flags & LED_BRETH_FUNCTION) {
			pduties = &dutys_array[0];
#ifdef CONFIG_BLN
if (blink == 0)
			{
				buttons_led_is_on = 1;
				// no blink needed
#endif
			pm8xxx_pwm_lut_config(led->pwm_led,
						led->period_us,
						pduties,
						led->duty_time_ms,
						led->start_index,
						led->duites_size,
						0, 0,
						led->lut_flag);
#ifdef CONFIG_BLN
} else
			{
				pduties = led->duties;
				// LUT_LOOP for blinking
				pm8xxx_pwm_lut_config(led->pwm_led,
							led->period_us,
							pduties,
							led->duty_time_ms, // slower, 2x
							led->start_index,
							led->duites_size * 8, // 16 duty entries -> original size * 2, + 6 * 8 zeroes for pause
							0, 0,
							PM_PWM_LUT_LOOP | PM_PWM_LUT_PAUSE_HI_EN);
			}
#endif
			pm8xxx_pwm_lut_enable(led->pwm_led, 0);
			pm8xxx_pwm_lut_enable(led->pwm_led, 1);
		} else {
			pwm_config(led->pwm_led, 6400 * led->pwm_coefficient / 100, 6400);
			pwm_enable(led->pwm_led);
		}
	} else {
		if (led->function_flags & LED_BRETH_FUNCTION) {
#ifdef CONFIG_BLN
			buttons_led_is_on = 0;
#endif
			wake_lock_timeout(&pmic_led_wake_lock, HZ*2);
			pduties = &dutys_array[8];
			pm8xxx_pwm_lut_config(led->pwm_led,
						led->period_us,
						pduties,
						led->duty_time_ms,
						led->start_index,
						led->duites_size,
						0, 0,
						led->lut_flag);
			pm8xxx_pwm_lut_enable(led->pwm_led, 0);
			pm8xxx_pwm_lut_enable(led->pwm_led, 1);
			queue_delayed_work(g_led_work_queue,
						&led->fade_delayed_work,
						msecs_to_jiffies(led->duty_time_ms*led->duites_size));
		} else {
			pwm_disable(led->pwm_led);
			level = (0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(led->id);
			led->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
			led->reg |= level;
			rc = pm8xxx_writeb(led->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), led->reg);
			if (rc)
				LED_ERR("%s can't set (%d) led value rc=%d\n", __func__, led->id, rc);
		}
	}
}

#ifdef CONFIG_BLN
static int buttons_turning_on_with_screen_on = 0;

static void pm8xxx_led_current_set(struct led_classdev *led_cdev, enum led_brightness brightness)
{
	// checking for buttons device
	if (led_cdev_buttons == led_cdev)
	{
		printk("[BB] led_current_set %d \n", brightness);
		if (brightness>0)
		{
			// screen turning off together with buttons led
			buttons_turning_on_with_screen_on = 1;
		} else
		{
			// screen turning off together without buttons led
			buttons_turning_on_with_screen_on = 0;
		}
	}
	// no blink needed
	pm8xxx_led_current_set_flagged( led_cdev, brightness, 0);
}


static void pm8xxx_buttons_blink(int on)
{
	if (on > 0)
	{
		printk("[BB] blink on  screen: %d j: %lu \n", touchscreen_is_on(), jiffies);
		if (buttons_led_is_on == 1) return; // already lit, dont blink
		if (touchscreen_is_on() == 1) return; // touchscreen is on, dont blink
		printk("[BLN] touchscreen_is_on(1): %d",touchscreen_is_on());
		buttons_led_is_blinking = 1;
		// start blinking (brightness = 1, blink flag needed = 1)
		pm8xxx_led_current_set_flagged(led_cdev_buttons, 1, 1);
	} else
	{
		printk("[BB] blink off  screen: %d j: %lu \n", touchscreen_is_on(), jiffies);
		if (buttons_led_is_blinking == 0) return;
		buttons_led_is_blinking = 0;
		if (touchscreen_is_on() == 1 && buttons_turning_on_with_screen_on == 1) return; // touchscreen is on, button light already override the blinking, dont turn off
		// start blinking (brightness = 0, blink flag needed = indifferent)
		pm8xxx_led_current_set_flagged(led_cdev_buttons, 0, 1);
	}
}
#endif

static void pm8xxx_led_gpio_set(struct led_classdev *led_cdev, enum led_brightness brightness)
{
	int rc, offset;
	u8 level;

	struct pm8xxx_led_data *led = container_of(led_cdev,  struct pm8xxx_led_data, cdev);
	LED_INFO("%s, bank:%d, brightness:%d sync: %d\n", __func__, led->bank, brightness, led->led_sync);
	if (led->gpio_status_switch != NULL)
		led->gpio_status_switch(0);
	pwm_disable(led->pwm_led);
	if(led->led_sync) {
		if (!strcmp(led->cdev.name, "green")){
			if (green_back_led_data->gpio_status_switch != NULL)
				green_back_led_data->gpio_status_switch(0);
			pwm_disable(green_back_led_data->pwm_led);
			level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(green_back_led_data->id);
			green_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
			green_back_led_data->reg |= level;
			rc = pm8xxx_writeb(green_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), green_back_led_data->reg);
		}
		if (!strcmp(led->cdev.name, "amber")){
			if (amber_back_led_data->gpio_status_switch != NULL)
				amber_back_led_data->gpio_status_switch(0);
			pwm_disable(amber_back_led_data->pwm_led);
			level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(amber_back_led_data->id);
			amber_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
			amber_back_led_data->reg |= level;
			rc = pm8xxx_writeb(amber_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), amber_back_led_data->reg);
		}
	}
	if (brightness) {
		if (led->gpio_status_switch != NULL)
			led->gpio_status_switch(1);
		pwm_config(led->pwm_led, 6400 * led->pwm_coefficient / 100, 6400);
		pwm_enable(led->pwm_led);
		if(led->led_sync) {
			if 	(!strcmp(led->cdev.name, "green")) {
				if (green_back_led_data->gpio_status_switch != NULL)
					green_back_led_data->gpio_status_switch(1);
				level = (green_back_led_data->out_current << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
				offset = PM8XXX_LED_OFFSET(green_back_led_data->id);
				green_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
				green_back_led_data->reg |= level;
				rc = pm8xxx_writeb(green_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), green_back_led_data->reg);
				pwm_config(green_back_led_data->pwm_led, 64000, 64000);
				pwm_enable(green_back_led_data->pwm_led);
			}
			if 	(!strcmp(led->cdev.name, "amber")) {
				if (amber_back_led_data->gpio_status_switch != NULL)
					amber_back_led_data->gpio_status_switch(1);
				level = (amber_back_led_data->out_current << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
				offset = PM8XXX_LED_OFFSET(amber_back_led_data->id);
				amber_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
				amber_back_led_data->reg |= level;
				rc = pm8xxx_writeb(amber_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), amber_back_led_data->reg);
				pwm_config(amber_back_led_data->pwm_led, 64000, 64000);
				pwm_enable(amber_back_led_data->pwm_led);
			}
		}
	}
}

static void led_work_func(struct work_struct *work)
{
	struct pm8xxx_led_data *ldata;
	int rc, offset;
	u8 level;

	ldata = container_of(work, struct pm8xxx_led_data, led_work);
	LED_INFO("%s: bank %d sync %d\n", __func__, ldata->bank, ldata->led_sync);
	pwm_disable(ldata->pwm_led);
	if (ldata->gpio_status_switch != NULL)
		ldata->gpio_status_switch(0);
	if(ldata->led_sync) {
		if (!strcmp(ldata->cdev.name, "green")){
			if (green_back_led_data->gpio_status_switch != NULL)
				green_back_led_data->gpio_status_switch(0);
			pwm_disable(green_back_led_data->pwm_led);
			level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(green_back_led_data->id);
			green_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
			green_back_led_data->reg |= level;
			rc = pm8xxx_writeb(green_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), green_back_led_data->reg);
		}
		if (!strcmp(ldata->cdev.name, "amber")){
			if (amber_back_led_data->gpio_status_switch != NULL)
				amber_back_led_data->gpio_status_switch(0);
			pwm_disable(amber_back_led_data->pwm_led);
			level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
			offset = PM8XXX_LED_OFFSET(amber_back_led_data->id);
			amber_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
			amber_back_led_data->reg |= level;
			rc = pm8xxx_writeb(amber_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), amber_back_led_data->reg);
		}
	}
}

static void led_alarm_handler(struct alarm *alarm)
{
	struct pm8xxx_led_data *ldata;

	ldata = container_of(alarm, struct pm8xxx_led_data, led_alarm);
	queue_work(g_led_work_queue, &ldata->led_work);
}

static void led_blink_do_work(struct work_struct *work)
{
	struct pm8xxx_led_data *led;

	led = container_of(work, struct pm8xxx_led_data, blink_delayed_work.work);

	if (led->gpio_status_switch != NULL)
		led->gpio_status_switch(1);
	pwm_config(led->pwm_led, led->duty_time_ms * 1000, led->period_us);
	pwm_enable(led->pwm_led);
	if(led->led_sync) {
		if	(!strcmp(led->cdev.name, "green")) {
			if (green_back_led_data->gpio_status_switch != NULL)
				green_back_led_data->gpio_status_switch(1);
			pwm_config(green_back_led_data->pwm_led, green_back_led_data->duty_time_ms * 1000, green_back_led_data->period_us);
			pwm_enable(green_back_led_data->pwm_led);
		}
		if	(!strcmp(led->cdev.name, "amber")) {
			if (amber_back_led_data->gpio_status_switch != NULL)
				amber_back_led_data->gpio_status_switch(1);
			pwm_config(amber_back_led_data->pwm_led, amber_back_led_data->duty_time_ms * 1000, amber_back_led_data->period_us);
			pwm_enable(amber_back_led_data->pwm_led);
		}
	}

}

#ifdef CONFIG_BLN
static ssize_t pm8xxx_bln_show(struct device *dev,
					struct device_attribute *attr,
					char *buf)
{
	return sprintf(buf, "%d\n", bln);
}

static ssize_t pm8xxx_bln_store(struct device *dev,
				       struct device_attribute *attr,
				       const char *buf, size_t count)
{
	int val;
	val = -1;
	sscanf(buf, "%u", &val);
	if (val < 0 || val > 1)
		return -EINVAL;
	bln = val;
	return count;
}

static DEVICE_ATTR(bln, 0644, pm8xxx_bln_show, pm8xxx_bln_store);
#endif

static ssize_t pm8xxx_led_blink_show(struct device *dev,
					struct device_attribute *attr,
					char *buf)
{
	return sprintf(buf, "%d\n", current_blink);
}

static ssize_t pm8xxx_led_blink_store(struct device *dev,
				       struct device_attribute *attr,
				       const char *buf, size_t count)
{
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;
	int val;
	int level, offset;

	val = -1;
	sscanf(buf, "%u", &val);
	if (val < 0 || val > 255)
		return -EINVAL;
	current_blink= val;
	led_cdev = (struct led_classdev *) dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	LED_INFO("%s: bank %d blink %d sync %d\n", __func__, ldata->bank, val, ldata->led_sync);

	switch (val) {
	case BLINK_STOP:
		if (ldata->gpio_status_switch != NULL)
			ldata->gpio_status_switch(0);
		pwm_disable(ldata->pwm_led);

		if(ldata->led_sync) {
			if 	(!strcmp(ldata->cdev.name, "green")) {
				if (green_back_led_data->gpio_status_switch != NULL)
					green_back_led_data->gpio_status_switch(0);
				pwm_disable(green_back_led_data->pwm_led);
			}
			if 	(!strcmp(ldata->cdev.name, "amber")) {
				if (amber_back_led_data->gpio_status_switch != NULL)
					amber_back_led_data->gpio_status_switch(0);
				pwm_disable(amber_back_led_data->pwm_led);
			}
		}
#ifdef CONFIG_BLN
		if (bln > 0)
		{
			pm8xxx_buttons_blink(0);
		}
#endif
		break;
	case BLINK_UNCHANGE:
		pwm_disable(ldata->pwm_led);
		if (led_cdev->brightness) {
			if (ldata->gpio_status_switch != NULL)
				ldata->gpio_status_switch(1);
			pwm_config(ldata->pwm_led, 6400 * ldata->pwm_coefficient / 100, 6400);
			pwm_enable(ldata->pwm_led);

			if(ldata->led_sync) {
				if	(!strcmp(ldata->cdev.name, "green")) {
					if (green_back_led_data->gpio_status_switch != NULL)
						green_back_led_data->gpio_status_switch(1);
					pwm_config(green_back_led_data->pwm_led, 64000, 64000);
					pwm_enable(green_back_led_data->pwm_led);
				}
				if	(!strcmp(ldata->cdev.name, "amber")) {
					if (amber_back_led_data->gpio_status_switch != NULL)
						amber_back_led_data->gpio_status_switch(1);
					pwm_config(amber_back_led_data->pwm_led, 64000, 64000);
					pwm_enable(amber_back_led_data->pwm_led);
				}
			}
#ifdef CONFIG_BLN
			if (bln > 0 && val > 0)
			{
				pm8xxx_buttons_blink(1);
			}
#endif
		} else {
			pwm_disable(ldata->pwm_led);
			if (ldata->gpio_status_switch != NULL)
				ldata->gpio_status_switch(0);

			if(ldata->led_sync) {
				if (!strcmp(ldata->cdev.name, "green")){
					if (green_back_led_data->gpio_status_switch != NULL)
						green_back_led_data->gpio_status_switch(0);
					pwm_disable(green_back_led_data->pwm_led);
					level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
					offset = PM8XXX_LED_OFFSET(green_back_led_data->id);
					green_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
					green_back_led_data->reg |= level;
					pm8xxx_writeb(green_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), green_back_led_data->reg);
				}
				if (!strcmp(ldata->cdev.name, "amber")){
					if (amber_back_led_data->gpio_status_switch != NULL)
						amber_back_led_data->gpio_status_switch(0);
					pwm_disable(amber_back_led_data->pwm_led);
					level = ( 0 << PM8XXX_DRV_LED_CTRL_SHIFT) & PM8XXX_DRV_LED_CTRL_MASK;
					offset = PM8XXX_LED_OFFSET(amber_back_led_data->id);
					amber_back_led_data->reg &= ~PM8XXX_DRV_LED_CTRL_MASK;
					amber_back_led_data->reg |= level;
					pm8xxx_writeb(amber_back_led_data->dev->parent, SSBI_REG_ADDR_LED_CTRL(offset), amber_back_led_data->reg);
				}
			}
#ifdef CONFIG_BLN
			if (bln > 0)
			{
				pm8xxx_buttons_blink(0);
			}
#endif
		}
		break;
	case BLINK_64MS_PER_2SEC:
		if (ldata->gpio_status_switch != NULL)
			ldata->gpio_status_switch(1);
		pwm_disable(ldata->pwm_led);
		pwm_config(ldata->pwm_led, ldata->blink_duty_per_2sec, 2000000);
		pwm_enable(ldata->pwm_led);

		if(ldata->led_sync) {
			if	(!strcmp(ldata->cdev.name, "green")) {
				if (green_back_led_data->gpio_status_switch != NULL)
					green_back_led_data->gpio_status_switch(1);
				pwm_disable(green_back_led_data->pwm_led);
				pwm_config(green_back_led_data->pwm_led, ldata->blink_duty_per_2sec, 2000000);
				pwm_enable(green_back_led_data->pwm_led);
			}
			if	(!strcmp(ldata->cdev.name, "amber")) {
				if (amber_back_led_data->gpio_status_switch != NULL)
					amber_back_led_data->gpio_status_switch(1);
				pwm_disable(amber_back_led_data->pwm_led);
				pwm_config(amber_back_led_data->pwm_led, ldata->blink_duty_per_2sec, 2000000);
				pwm_enable(amber_back_led_data->pwm_led);
			}
		}
#ifdef CONFIG_BLN
		if (bln > 0 && val > 0)
		{
			pm8xxx_buttons_blink(1);
		}
#endif
		break;
	case BLINK_64MS_ON_310MS_PER_2SEC:
		cancel_delayed_work_sync(&ldata->blink_delayed_work);
		pwm_disable(ldata->pwm_led);
		ldata->duty_time_ms = 64;
		ldata->period_us = 2000000;

		if(ldata->led_sync) {
			if	(!strcmp(ldata->cdev.name, "green")) {
				pwm_disable(green_back_led_data->pwm_led);
				green_back_led_data->duty_time_ms = 64;
				green_back_led_data->period_us = 2000000;
			}
			if	(!strcmp(ldata->cdev.name, "amber")) {
				pwm_disable(amber_back_led_data->pwm_led);
				amber_back_led_data->duty_time_ms = 64;
				amber_back_led_data->period_us = 2000000;
			}
		}
		queue_delayed_work(g_led_work_queue, &ldata->blink_delayed_work,
				   msecs_to_jiffies(310));
		break;
	case BLINK_64MS_ON_2SEC_PER_2SEC:
		cancel_delayed_work_sync(&ldata->blink_delayed_work);
		pwm_disable(ldata->pwm_led);
		ldata->duty_time_ms = 64;
		ldata->period_us = 2000000;

		if(ldata->led_sync) {
			if	(!strcmp(ldata->cdev.name, "green")) {
				pwm_disable(green_back_led_data->pwm_led);
				green_back_led_data->duty_time_ms = 64;
				green_back_led_data->period_us = 2000000;
			}
			if	(!strcmp(ldata->cdev.name, "amber")) {
				pwm_disable(amber_back_led_data->pwm_led);
				amber_back_led_data->duty_time_ms = 64;
				amber_back_led_data->period_us = 2000000;
			}
		}
		queue_delayed_work(g_led_work_queue, &ldata->blink_delayed_work,
				   msecs_to_jiffies(1000));
		break;
	case BLINK_1SEC_PER_2SEC:
		pwm_disable(ldata->pwm_led);
		pwm_config(ldata->pwm_led, 1000000, 2000000);
		pwm_enable(ldata->pwm_led);

		if(ldata->led_sync) {
			if	(!strcmp(ldata->cdev.name, "green")) {
				pwm_disable(green_back_led_data->pwm_led);
				pwm_config(green_back_led_data->pwm_led, 1000000, 2000000);
				pwm_enable(green_back_led_data->pwm_led);
			}
			if	(!strcmp(ldata->cdev.name, "amber")) {
				pwm_disable(amber_back_led_data->pwm_led);
				pwm_config(amber_back_led_data->pwm_led, 1000000, 2000000);
				pwm_enable(amber_back_led_data->pwm_led);
			}
		}
		break;
	default:
		LED_ERR("%s: bank %d did not support blink type %d\n", __func__, ldata->bank, val);
		return -EINVAL;
	}

	return count;
}
static DEVICE_ATTR(blink, 0644, pm8xxx_led_blink_show, pm8xxx_led_blink_store);

static ssize_t pm8xxx_led_off_timer_store(struct device *dev,
				   struct device_attribute *attr,
				   const char *buf, size_t count)
{
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;
	int min, sec;
	uint16_t off_timer;
	ktime_t interval;
	ktime_t next_alarm;

	min = -1;
	sec = -1;
	sscanf(buf, "%d %d", &min, &sec);

	if (min < 0 || min > 255)
		return -EINVAL;
	if (sec < 0 || sec > 255)
		return -EINVAL;
	led_cdev = (struct led_classdev *) dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	LED_INFO("Setting %s off_timer to %d min %d sec \n", led_cdev->name, min, sec);
	off_timer = min * 60 + sec;

	alarm_cancel(&ldata->led_alarm);
	cancel_work_sync(&ldata->led_work);
	if (off_timer) {
		interval = ktime_set(off_timer, 0);
		next_alarm = ktime_add(alarm_get_elapsed_realtime(), interval);
		alarm_start_range(&ldata->led_alarm, next_alarm, next_alarm);
	}
	return count;
}
static DEVICE_ATTR(off_timer, 0644, NULL, pm8xxx_led_off_timer_store);

static ssize_t pm8xxx_led_currents_show(struct device *dev,
					struct device_attribute *attr,
					char *buf)
{
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	led_cdev = (struct led_classdev *) dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	return sprintf(buf, "%d\n", ldata->out_current);
}

static ssize_t pm8xxx_led_currents_store(struct device *dev,
					 struct device_attribute *attr,
					 const char *buf, size_t count)
{
	int currents = 0;
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	sscanf(buf, "%d", &currents);
	if (currents < 0)
		return -EINVAL;

	led_cdev = (struct led_classdev *)dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	LED_INFO("%s: bank %d currents %d\n", __func__, ldata->bank, currents);
	if (currents <= 60)
	ldata->out_current = currents;

	ldata->cdev.brightness_set(led_cdev, 0);
	if (currents)
		ldata->cdev.brightness_set(led_cdev, 255);

	return count;
}
static DEVICE_ATTR(currents, 0644, pm8xxx_led_currents_show, pm8xxx_led_currents_store);

static ssize_t pm8xxx_led_pwm_coefficient_show(struct device *dev,
					struct device_attribute *attr,
					char *buf)
{
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	led_cdev = (struct led_classdev *) dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	return sprintf(buf, "%d\n", ldata->pwm_coefficient);
}

static ssize_t pm8xxx_led_pwm_coefficient_store(struct device *dev,
					 struct device_attribute *attr,
					 const char *buf, size_t count)
{
	int pwm_coefficient1 = 0;
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	sscanf(buf, "%d", &pwm_coefficient1);
	if ((pwm_coefficient1 < 0) || (pwm_coefficient1 > 100)) {
		LED_INFO("%s: pwm_coefficient = %d, out of range.\n",
			__func__, pwm_coefficient1);
		return -EINVAL;
	}

	led_cdev = (struct led_classdev *)dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	LED_INFO("%s: pwm_coefficient %d\n", __func__, pwm_coefficient1);

	ldata->pwm_coefficient = pwm_coefficient1;

	return count;
}
static DEVICE_ATTR(pwm_coefficient, 0644, pm8xxx_led_pwm_coefficient_show, pm8xxx_led_pwm_coefficient_store);

static ssize_t pm8xxx_led_lut_coefficient_show(struct device *dev,
					struct device_attribute *attr,
					char *buf)
{
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	led_cdev = (struct led_classdev *) dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	return sprintf(buf, "%d\n", lut_coefficient);
}

static ssize_t pm8xxx_led_lut_coefficient_store(struct device *dev,
					 struct device_attribute *attr,
					 const char *buf, size_t count)
{
	int lut_coefficient1 = 0;
	int i;
	struct led_classdev *led_cdev;
	struct pm8xxx_led_data *ldata;

	sscanf(buf, "%d", &lut_coefficient1);
	if (lut_coefficient1 < 0)
		return -EINVAL;

	led_cdev = (struct led_classdev *)dev_get_drvdata(dev);
	ldata = container_of(led_cdev, struct pm8xxx_led_data, cdev);

	LED_INFO("%s: lut_coefficient %d\n", __func__, lut_coefficient1);
	for (i = 0; i < 16; i++) {
		dutys_array[i] = (*(ldata->duties + i)) * lut_coefficient1 / 100;
	}
	lut_coefficient = lut_coefficient1;
	return count;
}
static DEVICE_ATTR(lut_coefficient, 0644, pm8xxx_led_lut_coefficient_show, pm8xxx_led_lut_coefficient_store);

static int __devinit pm8xxx_led_probe(struct platform_device *pdev)
{
	const struct pm8xxx_led_platform_data *pdata = pdev->dev.platform_data;
	struct pm8xxx_led_configure *curr_led;
	struct pm8xxx_led_data *led, *led_dat;
	int i, j, ret = -ENOMEM;

	if (pdata == NULL) {
		LED_ERR("platform data not supplied\n");
		return -EINVAL;
	}

	led = kcalloc(pdata->num_leds + 1, sizeof(*led), GFP_KERNEL);
	if (led == NULL) {
		LED_ERR("failed to alloc memory\n");
		return -ENOMEM;
	}
	wake_lock_init(&pmic_led_wake_lock, WAKE_LOCK_SUSPEND, "pmic_led");
	g_led_work_queue = create_workqueue("pm8xxx-led");
	if (g_led_work_queue == NULL) {
		LED_ERR("failed to create workqueue\n");
		goto err_create_work_queue;
	}

	for (i = 0; i < pdata->num_leds; i++) {
		curr_led			= &pdata->leds[i];
		led_dat				= &led[i];
		led_dat->cdev.name		= curr_led->name;
		led_dat->id     		= curr_led->flags;
		led_dat->bank			= curr_led->flags;
		led_dat->function_flags		= curr_led->function_flags;
		led_dat->start_index		= curr_led->start_index;
		led_dat->duty_time_ms		= curr_led->duty_time_ms;
		led_dat->period_us		= curr_led->period_us;
		led_dat->duites_size		= curr_led->duites_size;
		led_dat->lut_flag		= curr_led->lut_flag;
		led_dat->out_current		= curr_led->out_current;
		led_dat->duties			= &(curr_led->duties[0]);
		led_dat->led_sync		= curr_led->led_sync;
		led_dat->pwm_led 		= pwm_request(led_dat->bank, led_dat->cdev.name);
		led_dat->lpm_power      = curr_led->lpm_power;
		if (curr_led->duties[1]) {
			for (j = 0; j < 64; j++)
				dutys_array[j] = *(led_dat->duties + j);
		}

		if( curr_led->pwm_coefficient > 0 )
			led_dat->pwm_coefficient	= curr_led->pwm_coefficient;
		else
			led_dat->pwm_coefficient	= 100;

		if (curr_led->blink_duty_per_2sec > 0)
			led_dat->blink_duty_per_2sec = curr_led->blink_duty_per_2sec;
		else
			led_dat->blink_duty_per_2sec = 64000;

		switch (led_dat->id) {
		case PM8XXX_ID_GPIO24:
		case PM8XXX_ID_GPIO25:
		case PM8XXX_ID_GPIO26:
			led_dat->cdev.brightness_set = pm8xxx_led_gpio_set;
			if (curr_led->gpio_status_switch != NULL)
				led_dat->gpio_status_switch = curr_led->gpio_status_switch;
			break;
		case PM8XXX_ID_LED_0:
		case PM8XXX_ID_LED_1:
		case PM8XXX_ID_LED_2:
			led_dat->cdev.brightness_set    = pm8xxx_led_current_set;
			if (led_dat->function_flags & LED_PWM_FUNCTION) {
				led_dat->reg		= pm8xxxx_led_pwm_mode(led_dat->id);
				INIT_DELAYED_WORK(&led[i].fade_delayed_work, led_fade_do_work);
			} else
				led_dat->reg		= PM8XXX_LED_MODE_MANUAL;
			break;
		case PM8XXX_ID_LED_KB_LIGHT:
			break;
		}
		led_dat->cdev.brightness	= LED_OFF;
		led_dat->dev			= &pdev->dev;

		ret = led_classdev_register(&pdev->dev, &led_dat->cdev);
		if (ret) {
			LED_ERR("unable to register led %d,ret=%d\n", led_dat->id, ret);
			goto err_register_led_cdev;
		}
#ifdef CONFIG_BLN
		// blink buttons
		if (led_dat->id == PM8XXX_ID_LED_0)
		{
			// storing buttons light dev for blinking
			led_cdev_buttons = &led_dat->cdev;
			ret = device_create_file(led_dat->cdev.dev, &dev_attr_bln);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr currents\n", __func__, i);
				goto err_register_attr_currents;
			}
		}
		// blink buttons end
#endif
		if (led_dat->id >= PM8XXX_ID_LED_2 && led_dat->id <= PM8XXX_ID_LED_0) {
			ret = device_create_file(led_dat->cdev.dev, &dev_attr_currents);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr currents\n", __func__, i);
				goto err_register_attr_currents;
			}
		}

		if (led_dat->id >= PM8XXX_ID_LED_2 && led_dat->id <= PM8XXX_ID_LED_0) {
			ret = device_create_file(led_dat->cdev.dev, &dev_attr_lut_coefficient);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr lut_coefficient\n", __func__, i);
				goto err_register_attr_lut_coefficient;
			}
		}

		if ((led_dat->id <= PM8XXX_ID_GPIO26) || (led_dat->id <= PM8XXX_ID_LED_2) ||
		    (led_dat->id <= PM8XXX_ID_LED_1)) {
			ret = device_create_file(led_dat->cdev.dev, &dev_attr_pwm_coefficient);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr pwm_coefficient\n", __func__, i);
				goto err_register_attr_pwm_coefficient;
			}
		}
		if (led_dat->function_flags & LED_BLINK_FUNCTION) {
			INIT_DELAYED_WORK(&led[i].blink_delayed_work, led_blink_do_work);
			ret = device_create_file(led_dat->cdev.dev, &dev_attr_blink);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr blink\n", __func__, i);
				goto err_register_attr_blink;
			}

			ret = device_create_file(led_dat->cdev.dev, &dev_attr_off_timer);
			if (ret < 0) {
				LED_ERR("%s: Failed to create %d attr off timer\n", __func__, i);
				goto err_register_attr_off_timer;
			}
			alarm_init(&led[i].led_alarm, ANDROID_ALARM_ELAPSED_REALTIME_WAKEUP, led_alarm_handler);
			INIT_WORK(&led[i].led_work, led_work_func); 
		}

		if (!strcmp(led_dat->cdev.name, "button-backlight")) {
			for_key_led_data = led_dat;
		}
		if (!strcmp(led_dat->cdev.name, "green-back")) {
			LED_INFO("%s: green-back, 000 probe, led_dat = %x\n", __func__, (unsigned int)led_dat);
			green_back_led_data = led_dat;
		}
		if (!strcmp(led_dat->cdev.name, "amber-back")) {
			LED_INFO("%s: amber-back\n", __func__);
			amber_back_led_data = led_dat;
		}

	}

	pm8xxx_leds = led;

	platform_set_drvdata(pdev, led);

	return 0;

err_register_attr_off_timer:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			if (led[i].function_flags & LED_BLINK_FUNCTION)
				device_remove_file(led[i].cdev.dev, &dev_attr_off_timer);
		}
	}
	i = pdata->num_leds;
err_register_attr_blink:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			if (led[i].function_flags & LED_BLINK_FUNCTION)
				device_remove_file(led[i].cdev.dev, &dev_attr_blink);
		}
	}
	i = pdata->num_leds;
err_register_attr_pwm_coefficient:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			if (led[i].function_flags <= PM8XXX_ID_GPIO26)
				device_remove_file(led[i].cdev.dev, &dev_attr_pwm_coefficient);
		}
	}
	i = pdata->num_leds;
err_register_attr_lut_coefficient:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			if (led[i].function_flags >= PM8XXX_ID_LED_2 && led[i].function_flags <= PM8XXX_ID_LED_0)
				device_remove_file(led[i].cdev.dev, &dev_attr_lut_coefficient);
		}
	}
	i = pdata->num_leds;

err_register_attr_currents:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			if (led[i].function_flags >= PM8XXX_ID_LED_2 && led[i].function_flags <= PM8XXX_ID_LED_0)
				device_remove_file(led[i].cdev.dev, &dev_attr_currents);
		}
	}
	i = pdata->num_leds;
err_register_led_cdev:
	if (i > 0) {
		for (i = i - 1; i >= 0; i--) {
			pwm_free(led[i].pwm_led);
			led_classdev_unregister(&led[i].cdev);
		}
	}
	destroy_workqueue(g_led_work_queue);
err_create_work_queue:
	kfree(led);
	wake_lock_destroy(&pmic_led_wake_lock);
	return ret;
}

static int __devexit pm8xxx_led_remove(struct platform_device *pdev)
{
	int i;
	const struct led_platform_data *pdata =
				pdev->dev.platform_data;
	struct pm8xxx_led_data *led = platform_get_drvdata(pdev);

	for (i = 0; i < pdata->num_leds; i++) {
		led_classdev_unregister(&led[i].cdev);
		if (led[i].function_flags >= PM8XXX_ID_LED_2 && led[i].function_flags <= PM8XXX_ID_LED_0)
			device_remove_file(led[i].cdev.dev, &dev_attr_currents);
		if (led[i].function_flags & LED_BLINK_FUNCTION)
			device_remove_file(led[i].cdev.dev, &dev_attr_blink);
		if (led[i].function_flags & LED_BLINK_FUNCTION)
				device_remove_file(led[i].cdev.dev, &dev_attr_off_timer);
	}

	destroy_workqueue(g_led_work_queue);
	wake_lock_destroy(&pmic_led_wake_lock);
	kfree(led);

	return 0;
}
static int pm8xxx_led_resume(struct platform_device *pdev)
{
	int i;
	const struct led_platform_data *pdata =
				pdev->dev.platform_data;
	struct pm8xxx_led_data *led = platform_get_drvdata(pdev);
	for (i = 0; i < pdata->num_leds; i++) {
		if (!strcmp(led[i].cdev.name, "button-backlight") && led[i].lpm_power)
			led[i].lpm_power(0);
	}
	return 0;
}
static int pm8xxx_led_suspend(struct platform_device *pdev, pm_message_t state)
{
	int i;
	const struct led_platform_data *pdata =
				pdev->dev.platform_data;
	struct pm8xxx_led_data *led = platform_get_drvdata(pdev);
	for (i = 0; i < pdata->num_leds; i++) {
		if (!strcmp(led[i].cdev.name, "button-backlight") && led[i].lpm_power)
			led[i].lpm_power(1);
	}
	return 0;
}

static struct platform_driver pm8xxx_led_driver = {
	.probe		= pm8xxx_led_probe,
	.suspend    = pm8xxx_led_suspend,
	.resume     = pm8xxx_led_resume,
	.remove		= __devexit_p(pm8xxx_led_remove),
	.driver		= {
		.name	= PM8XXX_LEDS_DEV_NAME,
		.owner	= THIS_MODULE,
	},
};

static int __init pm8xxx_led_init(void)
{
	return platform_driver_register(&pm8xxx_led_driver);
}
subsys_initcall(pm8xxx_led_init);

static void __exit pm8xxx_led_exit(void)
{
	platform_driver_unregister(&pm8xxx_led_driver);
}
module_exit(pm8xxx_led_exit);

MODULE_DESCRIPTION("PM8XXX LEDs driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION("1.0");
MODULE_ALIAS("platform:pm8xxx-led");
>>>>>>> 1893d78... BLN:add button light notification

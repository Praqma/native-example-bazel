# We recommend using `new_http_archive` instead for more robust and secure performance.
# https://docs.bazel.build/versions/master/be/workspace.html#new_git_repository
#
# The `new_git_repository` rule has several issues:
#
# * Security - new_http_archive allows a sha256 to be specified, which ensures that the downloaded code is exactly what was expected.
# * Reliability - new_http_archive allows the user to specify multiple URLs to attempt downloads from. Most services have downtime occasionally, so specifying multiple remotes decreases the chances of being unable to download a dependency.
# * Speed - new_http_archive multiplexes downloads to get the fastest possible rate. You can also generally download a tarball that is a "shallow clone" of the repository, which decreases the size of the download.
# * Library issues - This implementation uses jGit, which we've discovered several issues with. It also lacks support for some authentication types you might use with your system git.

# Including external libraries
# https://docs.bazel.build/versions/master/tutorial/cpp-use-cases.html#including-external-libraries

new_http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.8.0.zip",
    sha256 = "f3ed3b58511efd272eb074a3a6d6fb79d7c2e6a0e374323d1e6bcbcc1ef141bf",
    build_file = "gtest.BUILD",
    strip_prefix = "googletest-release-1.8.0/googletest",
)
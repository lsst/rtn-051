.. image:: https://img.shields.io/badge/rtn--051-lsst.io-brightgreen.svg
   :target: https://rtn-051.lsst.io/
.. image:: https://github.com/lsst/rtn-051/workflows/CI/badge.svg
   :target: https://github.com/lsst/rtn-051/actions/

#################################################
Rubin Observatory Risk Management Tool User Guide
#################################################

RTN-051
=======

User guide for Rubin Observatory risk management software tooling.

**Links:**

- Publication URL: https://rtn-051.lsst.io/
- Alternative editions: https://rtn-051.lsst.io/v
- GitHub repository: https://github.com/lsst/rtn-051
- Build system: https://github.com/lsst/rtn-051/actions/

Build this technical note
=========================

You can clone this repository and build the technote locally if your system has Python 3.11 or later:

.. code-block:: bash

   git clone https://github.com/lsst/rtn-051
   cd rtn-051
   make init
   make html

Repeat the ``make html`` command to rebuild the technote after making changes.
If you need to delete any intermediate files for a clean build, run ``make clean``.

The built technote is located at ``_build/html/index.html``.

Publishing changes to the web
=============================

This technote is published to https://rtn-051.lsst.io/ whenever you push changes to the ``main`` branch on GitHub.
When you push changes to a another branch, a preview of the technote is published to https://rtn-051.lsst.io/v.

Editing this technical note
===========================

The main content of this technote is in ``index.rst`` (a reStructuredText file).
Metadata and configuration is in the ``technote.toml`` file.
For guidance on creating content and information about specifying metadata and configuration, see the Documenteer documentation: https://documenteer.lsst.io/technotes.

Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.

Style guide for content:

- Write with the active voice and in the present tense as much as possible.
  Write confidently and precisely, yet also casually.

- Address the user directly (“you can…”).
  Never use “we” since that’s ambiguous.
  If “we” means “Rubin Observatory,” then name “Rubin Observatory.”
  If “we” means the user, then say “you.”
  Even in tutorials, don’t use “we” to refer to an imaginary writer assisting the user.

- Write simple, short sentences in short paragraphs.
  Chunk information with headers.
  Try not to use more than two levels of heading hierarchy.

- Sentence case for headings is recommended.
  Title case for labels in reStructuredText files is recommended.

- Never use "here" as link text.
  Instead, make the relevant noun or phrase the link.

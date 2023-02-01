:tocdepth: 1

.. .. sectnum::
.. Removed section numbering.

.. Metadata such as the title, authors, and description are set in metadata.yaml

.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Rubin-Observatory-Risk-Tool-User-Guide:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

#########################################################
Vera C. Rubin Observatory Risk Management Tool User Guide
#########################################################

.. This section should provide a brief, top-level description of the page.

This technote is a user guide for the Alcea Tracking Solutions (ATS) software tool, managed by NOIRLab, built on the Alcea ASF architecture for risk management for the Vera C. Rubin Observatory.
The software documents and tracks the risks and opportunities throughout the lifetime of operations.

Throughout this documentation, the ATS software tool is referred to as the ``Risk Tool``.
The link to the ATS Risk Tool is `<https://noirlab.alceatech.com/saml2/sso>`__.

The Rubin Observatory Risk and Opportunity Plan, in `RDO-071 <https://rdo-71.lsst.io>`_, documents the risk management process.

.. toctree::
    :maxdepth: 2

    account-request-and-access
    basic-use-and-navigation
    breakdown-guides


.. _Rubin-Observatory-Risk-Tool-User-Guide-Project-Information:

Documentation project information
=================================

Information is provided on this documentation project and how to contribute to it.

.. toctree::
    :maxdepth: 1
    :glob:
    :titlesonly:

    project/index


.. Make in-text citations with: :cite:`bibkey`.
.. Uncomment to use citations
.. .. rubric:: References
.. 
.. .. bibliography:: local.bib lsstbib/books.bib lsstbib/lsst.bib lsstbib/lsst-dm.bib lsstbib/refs.bib lsstbib/refs_ads.bib
..    :style: lsst_aa
